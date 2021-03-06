;;
;; This file is part of HuDK.
;; ASM and C open source software development kit for the NEC PC Engine.
;; Licensed under the MIT License
;; (c) 2016-2020 MooZ
;;
    .include "startup.asm"

    .zp
index .ds 1
txt_x .ds 1
txt_y .ds 1

    .code
_main:
    ; Display the current system clock on screen.

    ; clear irq config flag
    stz    <irq_m
    ; set vsync vec
    irq_on INT_IRQ1

loop:
    vdc_wait_vsync          ; wait for screen refresh

    stw    #elapsed_label, <_si
    stb    #32, <_al
    stb    #32, <_ah
    ldx    #2
    lda    #2
    jsr    print_string     ; print "elapsed"

    stb    #2, <txt_x
    stb    #4, <txt_y
    stz    <index
@display_loop:
    ldx    <txt_x           ; compute BAT address
    lda    <txt_y
    jsr    vdc_calc_addr 
    jsr    vdc_set_write

    ldy    <index           ; print value
    lda    clock_hh, Y
    jsr    print_dec_u8

    lda    #' '             ; add a space
    jsr    print_char

    lda    <index           ; compute unit label pointer
    asl    A
    tay
    lda    labels, Y
    sta    <_si
    lda    labels+1, Y
    sta    <_si+1

    jsr    print_string_raw ; display unit

    lda    <txt_y           ; jump two lines below
    clc
    adc    #2
    sta    <txt_y

    inc    <index           ; next clock value
    lda    <index
    cmp    #4
    bne    @display_loop

    bra    loop             ; and we'll loop indefinitely

labels:
    .dw hours_label
    .dw minutes_label
    .dw seconds_label
    .dw ticks_label

elapsed_label:
  .db "elapsed:", 0
hours_label:
  .db "hours", 0
minutes_label:
  .db "minutes", 0
seconds_label:
  .db "seconds", 0
ticks_label:
  .db "ticks", 0

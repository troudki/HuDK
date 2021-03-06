;;
;; This file is part of HuDK.
;; ASM and C open source software development kit for the NEC PC Engine.
;; Licensed under the MIT License
;; (c) 2016-2020 MooZ
;;

;;
;; Title: 8x8 monochrome 1bpp font.
;;

;;
;; ubyte: FONT_8x8_COUNT
;; Number of characters embedded in the font.
FONT_8x8_COUNT=$80

;;
;; ubyte: FONT_8x8_ASCII_FIRST
;; ASCII code of the first font character.
;;
FONT_ASCII_FIRST=$00
;;
;; ubyte: FONT_8x8_ASCII_LAST
;; ASCII code of the last font character.
;;
FONT_ASCII_LAST =$9e

;;
;; ubyte: FONT_DIGIT_INDEX
;; Tile index of the first digit character ('0').
;;
FONT_DIGIT_INDEX=$30
;;
;; ubyte: FONT_UPPER_CASE_INDEX
;; Tile index of the first uppercase character ('A').
;;
FONT_UPPER_CASE_INDEX=$41
;;
;; ubyte: FONT_LOWER_CASE_INDEX
;; Tile index of the first lowercase character ('a').
;;
FONT_LOWER_CASE_INDEX=$61

;;
;; array: font_8x8
;; 8x8 1bpp font data.
;;
font_8x8:
     .db $00,$00,$00,$00,$00,$00,$00,$00    ;empty
     .db $00,$00,$00,$00,$00,$00,$00,$ff    ;  
     .db $00,$00,$00,$00,$00,$00,$ff,$ff    ;
     .db $00,$00,$00,$00,$00,$ff,$ff,$ff    ;
     .db $00,$00,$00,$00,$ff,$ff,$ff,$ff    ;
     .db $00,$00,$00,$ff,$ff,$ff,$ff,$ff    ;
     .db $00,$00,$ff,$ff,$ff,$ff,$ff,$ff    ;
     .db $00,$ff,$ff,$ff,$ff,$ff,$ff,$ff    ;
     .db $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff    ;
     .db $10,$38,$7c,$fe,$fe,$7c,$10,$38    ; ace of spaces
     .db $00,$6c,$fe,$fe,$fe,$7c,$38,$10    ; ace of hearts
     .db $00,$10,$38,$7c,$fe,$7c,$38,$10    ; ace of diamonds
     .db $10,$38,$38,$7c,$fe,$7c,$10,$38    ; ace of clubs
     .db $38,$7c,$fe,$fe,$fe,$7c,$38,$00    ; full circle
     .db $38,$44,$82,$82,$82,$44,$38,$00    ; empty circle
     .db $01,$02,$04,$08,$10,$20,$40,$80
    
     .db $80,$40,$20,$10,$08,$04,$02,$01
     .db $fe,$92,$92,$fe,$82,$82,$86,$82
     .db $40,$7c,$90,$7c,$50,$fe,$10,$10
     .db $7e,$42,$7e,$42,$7e,$42,$46,$82
     .db $fe,$82,$82,$fe,$82,$82,$fe,$82
     .db $08,$fc,$a8,$fe,$a4,$fc,$14,$0c
     .db $10,$38,$6c,$c6,$7c,$24,$4c,$00
     .db $00,$e8,$5a,$e8,$48,$ca,$64,$58
     .db $01,$03,$07,$0f,$1f,$3f,$7f,$ff
     .db $80,$c0,$e0,$f0,$f8,$fc,$fe,$ff
     .db $ff,$7f,$3f,$1f,$0f,$07,$03,$01
     .db $ff,$fe,$fc,$f8,$f0,$e0,$c0,$80
     .db $00,$04,$06,$ff,$06,$04,$00,$00
     .db $00,$20,$60,$ff,$60,$20,$00,$00
     .db $10,$38,$7c,$10,$10,$10,$10,$10
     .db $10,$10,$10,$10,$10,$7c,$38,$10
    
     .db $00,$00,$00,$00,$00,$00,$00,$00    ;SPACE
     .db $cc,$cc,$cc,$88,$88,$00,$cc,$00    ;!
     .db $6c,$6c,$d8,$00,$00,$00,$00,$00    ;"
     .db $6c,$fe,$6c,$6c,$6c,$fe,$6c,$00    ;#
     .db $10,$38,$40,$38,$04,$38,$10,$00    ;$
     .db $42,$a4,$48,$10,$24,$4a,$84,$00    ;%
     .db $20,$50,$20,$54,$88,$94,$62,$00    ;&
     .db $18,$30,$60,$00,$00,$00,$00,$00    ;'
     .db $18,$30,$60,$60,$60,$30,$18,$00    ;(
     .db $30,$18,$0c,$0c,$0c,$18,$30,$00    ;)
     .db $54,$38,$7c,$38,$54,$00,$00,$00    ;*
     .db $00,$10,$10,$7c,$10,$10,$00,$00    ;+
     .db $00,$00,$00,$18,$18,$08,$10,$00    ;,
     .db $00,$00,$00,$78,$00,$00,$00,$00    ;-
     .db $00,$00,$00,$00,$60,$60,$00,$00    ;.
     .db $06,$0c,$18,$30,$60,$c0,$00,$00    ;/

     .db $38,$4c,$c6,$c6,$c6,$64,$38,$00    ;0
     .db $18,$78,$18,$18,$18,$18,$7e,$00    ;1
     .db $7c,$c6,$0e,$3c,$78,$e0,$fe,$00    ;2
     .db $fe,$0c,$18,$7c,$06,$c6,$7c,$00    ;3
     .db $3c,$6c,$cc,$cc,$cc,$fe,$0c,$00    ;4
     .db $fe,$c0,$fc,$06,$06,$c6,$7c,$00    ;5
     .db $3c,$60,$c0,$fc,$c6,$c6,$7c,$00    ;6
     .db $fe,$c6,$0c,$18,$30,$30,$30,$00    ;7
     .db $7c,$c6,$c6,$7c,$c6,$c6,$7c,$00    ;8
     .db $7c,$c6,$c6,$7e,$06,$0c,$78,$00    ;9
     .db $00,$18,$18,$00,$18,$18,$00,$00    ;:
     .db $00,$18,$18,$00,$18,$18,$30,$00    ;;
     .db $0c,$18,$30,$60,$30,$18,$0c,$00    ;<
     .db $00,$00,$7c,$00,$7c,$00,$00,$00    ;=
     .db $60,$30,$18,$0c,$18,$30,$60,$00    ;>
     .db $7c,$c6,$9e,$38,$20,$00,$30,$00    ;?

     .db $3c,$42,$9a,$aa,$aa,$5c,$00,$00    ;@
     .db $38,$6c,$c6,$c6,$fe,$c6,$c6,$00    ;A
     .db $fc,$c6,$c6,$fc,$c6,$c6,$fc,$00    ;B
     .db $3c,$66,$c0,$c0,$c0,$66,$3c,$00    ;C
     .db $f8,$cc,$c6,$c6,$c6,$cc,$f8,$00    ;D
     .db $fe,$c0,$c0,$fc,$c0,$c0,$fe,$00    ;E
     .db $fe,$c0,$c0,$fc,$c0,$c0,$c0,$00    ;F
     .db $3c,$66,$c0,$ce,$c6,$66,$3e,$00    ;G
     .db $c6,$c6,$c6,$fe,$c6,$c6,$c6,$00    ;H
     .db $7e,$18,$18,$18,$18,$18,$7e,$00    ;I
     .db $06,$06,$06,$06,$06,$c6,$7c,$00    ;J
     .db $c6,$cc,$d8,$f0,$d8,$cc,$c6,$00    ;K
     .db $c0,$c0,$c0,$c0,$c0,$c0,$fe,$00    ;L
     .db $82,$c6,$ee,$fe,$d6,$c6,$c6,$00    ;M
     .db $86,$c6,$e6,$f6,$de,$ce,$c6,$00    ;N
     .db $7c,$c6,$c6,$c6,$c6,$c6,$7c,$00    ;O

     .db $fc,$c6,$c6,$c6,$fc,$c0,$c0,$00    ;P
     .db $7c,$c6,$c6,$c6,$de,$cc,$76,$00    ;Q
     .db $fc,$c6,$c6,$fc,$d8,$cc,$c6,$00    ;R
     .db $7c,$c6,$f0,$7c,$1e,$c6,$7c,$00    ;S
     .db $7e,$18,$18,$18,$18,$18,$18,$00    ;T
     .db $c6,$c6,$c6,$c6,$c6,$c6,$7c,$00    ;U
     .db $c6,$c6,$c6,$c6,$c6,$6c,$38,$00    ;V
     .db $c6,$c6,$c6,$d6,$fe,$ee,$c6,$00    ;W
     .db $c6,$ee,$7c,$38,$7c,$ee,$c6,$00    ;X
     .db $66,$66,$66,$3c,$18,$18,$18,$00    ;Y
     .db $fe,$0e,$1c,$38,$70,$e0,$fe,$00    ;Z
     .db $78,$60,$60,$60,$60,$60,$78,$00    ;[
     .db $c0,$60,$30,$18,$0c,$06,$00,$00    ; '\'
     .db $3c,$0c,$0c,$0c,$0c,$0c,$3c,$00    ;]
     .db $10,$28,$44,$00,$00,$00,$00,$00    ;^
     .db $00,$00,$00,$00,$00,$00,$fe,$00    ;_

     .db $00,$00,$00,$00,$00,$00,$00,$00    ; 
     .db $00,$00,$3c,$06,$7e,$c6,$7e,$00    ;a
     .db $c0,$c0,$fc,$c6,$c6,$c6,$fc,$00    ;b
     .db $00,$00,$7c,$c6,$c0,$c6,$7c,$00    ;c
     .db $06,$06,$7e,$c6,$c6,$c6,$7e,$00    ;d
     .db $00,$00,$7c,$c6,$fc,$c0,$7e,$00    ;e
     .db $3e,$60,$60,$f8,$60,$60,$60,$00    ;f
     .db $00,$00,$7c,$c6,$c6,$7e,$06,$7c    ;g
     .db $c0,$c0,$fc,$c6,$c6,$c6,$c6,$00    ;h
     .db $18,$00,$18,$18,$18,$18,$18,$00    ;i
     .db $0c,$0c,$00,$0c,$0c,$0c,$0c,$78    ;j
     .db $c0,$c0,$d8,$f0,$e0,$f0,$d8,$00    ;k
     .db $70,$30,$30,$30,$30,$30,$78,$00    ;l
     .db $00,$00,$7c,$d6,$d6,$d6,$d6,$00    ;m
     .db $00,$00,$7c,$66,$66,$66,$66,$00    ;n
     .db $00,$00,$3c,$66,$66,$66,$3c,$00    ;o

     .db $00,$00,$7c,$66,$66,$7c,$60,$60    ;p
     .db $00,$00,$3e,$66,$66,$3e,$06,$06    ;q
     .db $00,$00,$d8,$fc,$e0,$c0,$c0,$00    ;r
     .db $00,$00,$3c,$60,$38,$0c,$78,$00    ;s
     .db $30,$30,$78,$30,$30,$30,$1c,$00    ;t
     .db $00,$00,$66,$66,$66,$66,$3e,$00    ;u
     .db $00,$00,$c6,$c6,$6c,$38,$10,$00    ;v
     .db $00,$00,$c6,$d6,$d6,$d6,$6c,$00    ;w
     .db $00,$00,$c6,$6c,$10,$6c,$c6,$00    ;x
     .db $00,$00,$66,$66,$66,$3e,$06,$3c    ;y
     .db $00,$00,$fe,$0c,$38,$60,$fe,$00    ;z
     .db $08,$10,$10,$20,$10,$10,$08,$00    ;{
     .db $10,$10,$00,$00,$00,$10,$10,$00    ;|
     .db $10,$08,$08,$04,$08,$08,$10,$00    ;}
     .db $00,$00,$00,$32,$4c,$00,$00,$00    ;~
     .db $81,$42,$24,$18,$18,$24,$42,$81    ;  

font_8x8_palette:
    .dw VCE_GREEN, VCE_WHITE, VCE_BLACK, $0000, $0000, $0000, $0000, $0000

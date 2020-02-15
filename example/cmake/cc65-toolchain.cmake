set( CMAKE_SYSTEM_NAME Generic )

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}")

get_filename_component(CC65_TOOLCHAIN_PATH "${CC65_PATH}" REALPATH)

set( CMAKE_C_COMPILER ${CC65_TOOLCHAIN_PATH}/cc65 CACHE PATH "CC65 C compiler")
set( CMAKE_C_COMPILER_ID cc65 )

set( CMAKE_C_COMPILER_ID_RUN TRUE )
set( CMAKE_C_COMPILER_ID_WORKS TRUE )
set( CMAKE_C_COMPILER_ID_FORCED TRUE )

set( CMAKE_ASM_COMPILER ${CC65_TOOLCHAIN_PATH}/ca65 CACHE PATH "CA65 asm compiler")
set( CMAKE_ASM_COMPILER_ID ca65 )

set( CMAKE_ASM_COMPILER_ID_RUN TRUE )
set( CMAKE_ASM_COMPILER_ID_WORKS TRUE )
set( CMAKE_ASM_COMPILER_ID_FORCED TRUE )

set( CMAKE_LINKER ${CC65_TOOLCHAIN_PATH}/ld65 CACHE Path "LD65 linker" )
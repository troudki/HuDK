set( CMAKE_ASM_SOURCE_FILE_EXTENSIONS s;S;asm )
set( CMAKE_INCLUDE_FLAG_ASM "-I " )
set( CMAKE_ASM_COMPILE_OBJECT  "<CMAKE_ASM_COMPILER> <DEFINES> <INCLUDES> <FLAGS> -o <OBJECT> -raw <SOURCE>" )
set( CMAKE_ASM_LINK_EXECUTABLE "${CMAKE_COMMAND} -E copy <OBJECTS> <TARGET>")

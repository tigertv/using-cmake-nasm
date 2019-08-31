cmake_minimum_required (VERSION 2.6)

project (using-cmake-nasm)
set(CMAKE_CXX_STANDARD 17)

enable_language(ASM_NASM)
set(CMAKE_ASM_NASM_OBJECT_FORMAT elf64)
set(CMAKE_ASM_NASM_COMPILE_OBJECT "<CMAKE_ASM_NASM_COMPILER> <INCLUDES> \
    <FLAGS> -f ${CMAKE_ASM_NASM_OBJECT_FORMAT} -o <OBJECT> <SOURCE>")

add_executable(main
	first.asm
	main.cpp
)

#set(CMAKE_ASM_NASM_LINK_EXECUTABLE "ld <LINK_FLAGS> <OBJECTS> -o <TARGET> <LINK_LIBRARIES>")
#set(CMAKE_ASM_NASM_OBJECT_FORMAT elf64)
#set_source_files_properties(src/strlen.asm PROPERTIES COMPILE_FLAGS "-g -Fdwarf")

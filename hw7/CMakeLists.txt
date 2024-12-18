cmake_minimum_required(VERSION 3.0)
project(hw7)

add_compile_options(-Wno-int-conversion)

# c 표준 = 99
set(CMAKE_C_STANDARD 99)

# SRC1 = 컴파일러
set(SRC1 ${CMAKE_CURRENT_SOURCE_DIR}/source_compiler)

# SRC2 = 어셈블러/인터프리터
set(SRC2 ${CMAKE_CURRENT_SOURCE_DIR}/source_interpreter)


##### 1. 컴파일러 #####

# flex, bison 관련
find_package(BISON)
find_package(FLEX)
FLEX_TARGET(C_Flex "${SRC1}/lex.l" "${SRC1}/lex.yy.c")
BISON_TARGET(C_Bison "${SRC1}/yacc.y" "${SRC1}/y.tab.c" DEFINES_FILE "${SRC1}/y.tab.h")
ADD_FLEX_BISON_DEPENDENCY(C_Flex C_Bison)


# 실행파일 - 신텍스 분석기
add_executable(compiler
        ${SRC1}/main.c
        ${SRC1}/common_header.h
        ${SRC1}/type.h
        ${SRC1}/print/print_syn.c
        ${SRC1}/print/print_syn.h
        ${SRC1}/print/print_sem.c
        ${SRC1}/print/print_sem.h
        ${SRC1}/analysis/syntax_analysis.c
        ${SRC1}/analysis/syntax_analysis.h
        ${SRC1}/analysis/semantic_analysis.c
        ${SRC1}/analysis/semantic_analysis.h
        ${SRC1}/generate/gen.c
        ${SRC1}/generate/gen.h
        ${BISON_C_Bison_OUTPUTS}
        ${FLEX_C_Flex_OUTPUTS}
)


##### 2. 어셈블러 & 인터프리터 #####

FLEX_TARGET(I_Flex "${SRC2}/interp.l" "${SRC2}/lex.yy.c")
BISON_TARGET(I_Bison "${SRC2}/interp.y" "${SRC2}/y.tab.c" DEFINES_FILE "${SRC2}/y.tab.h")
ADD_FLEX_BISON_DEPENDENCY(I_Flex I_Bison)

add_executable(interp
        ${SRC2}/interp.c
        ${SRC2}/type.h
        ${SRC2}/lib.c
        ${BISON_I_Bison_OUTPUTS}
        ${FLEX_I_Flex_OUTPUTS}
)
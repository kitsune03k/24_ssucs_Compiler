cmake_minimum_required(VERSION 3.0)
project(hw6)

# c 표준 = 99
set(CMAKE_C_STANDARD 99)

# SRC = CMakeLists가 있는 과제 탑 디렉토리
set(SRC ${CMAKE_CURRENT_SOURCE_DIR}/source)


# flex, bison 관련
find_package(BISON)
find_package(FLEX)

FLEX_TARGET(myFlex "${SRC}/lex.l" "${SRC}/lex.yy.c")
BISON_TARGET(myBison "${SRC}/yacc.y" "${SRC}/y.tab.c" DEFINES_FILE "${SRC}/y.tab.h")
ADD_FLEX_BISON_DEPENDENCY(myFlex myBison)

add_compile_options(-Wno-int-conversion)

# 실행파일 - 신텍스 분석기
add_executable(a.out
        ${SRC}/main.c
        ${SRC}/common_header.h
        ${SRC}/type.h
        ${SRC}/print/print_syn.c
        ${SRC}/print/print_syn.h
        ${SRC}/print/print_sem.c
        ${SRC}/print/print_sem.h
        ${SRC}/analysis/syntax_analysis.c
        ${SRC}/analysis/syntax_analysis.h
        ${SRC}/analysis/semantic_analysis.c
        ${SRC}/analysis/semantic_analysis.h
        ${SRC}/semantic_debug/semantic_debug.c
        ${SRC}/semantic_debug/semantic_debug.h
        ${BISON_myBison_OUTPUTS}
        ${FLEX_myFlex_OUTPUTS}
)
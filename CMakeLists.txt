cmake_minimum_required(VERSION 2.8)

project(KR1)

set(KR1_src test.cpp CPoint.cpp CDist.cpp main.cpp CPoint + CDist.cpp)
set(KR1_hdr CPoint.hpp test.hpp Header.hpp CDist.hpp CPoint + CDist.hpp)

add_executable(${PROJECT_NAME} ${KR1_src} ${KR1_hdr})
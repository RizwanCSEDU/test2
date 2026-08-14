cmake_minimum_required(VERSION 3.10)
project(uv C)

option(BUILD_TESTING "" OFF)
option(ASAN "" OFF)

if(BUILD_TESTING)
  add_executable(uv_run_tests_a tests/main.c)
endif()

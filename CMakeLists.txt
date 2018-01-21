cmake_minimum_required(VERSION 2.8)

project(testlambda)

macro(use_cxx17)
  if (CMAKE_VERSION VERSION_LESS "3.1")
    if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
      set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
    endif ()
  else ()
    set (CMAKE_CXX_STANDARD 17)
  endif ()
endmacro(use_cxx17)

use_cxx17()

set(SOURCE_FILES src/main.cpp)

add_library(testlambda SHARED ${SOURCE_FILES})

target_include_directories(testlambda PRIVATE include)
target_include_directories(testlambda PRIVATE src)

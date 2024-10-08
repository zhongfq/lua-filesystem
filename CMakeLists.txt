cmake_minimum_required(VERSION 3.15 FATAL_ERROR)
project(lua-openxlsx)

set(CMAKE_OSX_ARCHITECTURES "x86_64;arm64")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

add_subdirectory(lua)

add_library(luafs MODULE 
  src/lua_fs.cpp
  src/lua_fs.h
  olua/olua.h
  olua/olua.hpp
  olua/olua.c
)
set_target_properties(luafs PROPERTIES 
    PREFIX ""
    OUTPUT_NAME fs
)
target_include_directories(luafs
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/olua
    ${CMAKE_CURRENT_SOURCE_DIR}/lua
)
if(APPLE)
    target_link_options(luafs PUBLIC -bundle -undefined dynamic_lookup)
elseif(WIN32)
    target_link_libraries(luafs liblua)
endif()
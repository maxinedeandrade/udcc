cmake_minimum_required(VERSION 3.11)

project(udcc C)

add_executable(udcc ./udcc/tool/udcc/main.c)
target_include_directories(udcc PUBLIC ./udcc/include) 
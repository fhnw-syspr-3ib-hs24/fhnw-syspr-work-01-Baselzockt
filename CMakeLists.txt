cmake_minimum_required(VERSION 3.26)
project(fhnw-syspr-work-01-Baselzockt C)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "-pedantic")
add_executable(size_of size_of.c)
add_executable(args args.c)
add_executable(tree my_tree.c
        tree.c)
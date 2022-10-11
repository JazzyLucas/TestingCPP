cmake_minimum_required(VERSION 3.23)
project(TestingCPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(TestingCPP main.cpp menus/start_menu.h menus/atm.h menus/story.h menus/vectors.h menus/raii.h menus/iMenu.h)

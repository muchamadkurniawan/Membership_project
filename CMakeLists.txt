cmake_minimum_required(VERSION 3.24)
project(Membership_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(Membership_project main.cpp Database.h ModelMember.h)

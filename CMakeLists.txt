cmake_minimum_required(VERSION 3.20)

project(Avery C)

find_package(PkgConfig REQUIRED)

pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})

include_directories(include)

add_definitions(${GTK3_CFLAGS_OTHER})

add_executable(Avery
    src/gui/mainwindow.c
    src/main.c)

target_link_libraries(Avery ${GTK3_LIBRARIES})

#Right now, just have the debug symbols enabled by default.
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -pedantic -g")

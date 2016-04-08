cmake_minimum_required(VERSION 3.4)
project(05)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -lm -Werror")

set(SOURCE_FILES main.c Artikel.h lagerdat.c lagerdat.h)
add_executable(05 ${SOURCE_FILES} Artikel.h lagerdat.c lagerdat.h)
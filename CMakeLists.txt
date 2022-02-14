cmake_minimum_required(VERSION 3.17)
project(SFML_Indiano)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILE main.cpp Game.cpp Game.h)

add_executable(SFML_Indiano_ROOT ${SOURCE_FILE} Game.cpp Game.h)

find_package(SFML 2 COMPONENTS audio graphics window system REQUIRED)


if (SFML_FOUND)
    target_link_libraries(SFML_Indiano_ROOT sfml-graphics sfml-window sfml-system)

endif ()
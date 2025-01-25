cmake_minimum_required(VERSION 3.20)

project(Jsoner
    DESCRIPTION "Json extension for Qt"
    VERSION     1.0.0
    LANGUAGES   CXX C
)

option(JSONER_BUILD_QML OFF "Build the QML module")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(cmake/Utils.cmake)

install(FILES cmake/FindJsoner.cmake DESTINATION share/cmake/Modules)

# Finding Qt
set(QT_MODULES Core)
if (JSONER_BUILD_QML)
    list(APPEND QT_MODULES Qml)
endif()
find_package(Qt6 REQUIRED COMPONENTS ${QT_MODULES})

# seting up Qt variables
set(CMAKE_AUTOMOC ON)
set(QT_QML_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/qml)

# Adding sources
add_subdirectory(src)

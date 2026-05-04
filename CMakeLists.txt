cmake_minimum_required(VERSION 3.19)
project(Liber LANGUAGES CXX)

# 1. Configurações Globais
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ativa automação para Widgets e Recursos
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets Sql)

qt_standard_project_setup()

file(GLOB_RECURSE SOURCES
    "main.cpp"
    "src/*.cpp"
    "src/database/*.cpp"
)

file(GLOB_RECURSE HEADERS
    "src/*.h"
    "src/database/*.h"
)

file(GLOB_RECURSE FORMS
    "src/*.ui"
)

qt_add_executable(Liber
    WIN32 MACOSX_BUNDLE
    ${SOURCES}
    ${HEADERS}
    ${FORMS}
)

target_include_directories(Liber
    PRIVATE
    src
    src/ui
    src/database
)

target_link_libraries(Liber
    PRIVATE
    Qt6::Core
    Qt6::Widgets
    Qt6::Sql
)

install(TARGETS Liber
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET Liber
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})

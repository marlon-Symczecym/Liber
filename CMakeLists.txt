cmake_minimum_required(VERSION 3.19)
project(Liber LANGUAGES CXX)

# 1. Configurações Globais
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ativa automação para Widgets e Recursos
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# 2. Localização do Qt (No Fedora, certifique-se de ter instalado o qt6-qtbase-devel)
find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets Sql)

qt_standard_project_setup()

# 3. Mapeamento de arquivos (Simplificado com GLOB_RECURSE)
file(GLOB_RECURSE SOURCES "main.cpp" "src/*.cpp")
file(GLOB_RECURSE HEADERS "src/*.h")
file(GLOB_RECURSE FORMS "src/*.ui")

# 4. Executável (REMOVIDO WIN32 aqui, pois no Linux ele não existe)
qt_add_executable(Liber
    ${SOURCES}
    ${HEADERS}
    ${FORMS}
    resource.qrc
)

# 5. Diretórios de Inclusão
target_include_directories(Liber
    PRIVATE
    src
    src/ui
    src/database
)

# 6. Linkagem (No Linux, o linker é mais rigoroso com dependências)
target_link_libraries(Liber
    PRIVATE
    Qt6::Core
    Qt6::Widgets
    Qt6::Sql
)

# 7. Instalação e Deploy (Ajustado para padrões Linux/Unix)
if(UNIX AND NOT APPLE)
    install(TARGETS Liber
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    )
endif()

# O comando qt_generate_deploy_app_script no Linux foca em criar pacotes como AppImage ou Flatpak
# Por enquanto, para desenvolvimento, o acima é o suficiente.
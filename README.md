# Liber

> Minha biblioteca digital pessoal para gerenciar livros e autores.

## 📚 Sobre o Projeto

**Liber** é uma aplicação desktop construida em **C++ com Qt** que serve como minha biblioteca digital pessoal. A ideia é simples: um lugar para organizar os livros que estou lendo, quero ler e já li — com direito a resumos e impressões pessoais sobre cada obra.

### Funcionalidades Planejadas

- **CRUD de Livros** — Cadastrar, editar, visualizar e excluir livros
- **CRUD de Autores** — Gestão de autores cadastrados
- **Categorização por Status** — Lendo, Quero Ler, Lidos
- **Resumo Pessoal** — Para livros finalizados, um campo para anotar minhas impressões
- **Home/Estante** — Visualização dos livros na estante

---

## 🗂 Estrutura de Pastas

```
Liber/
├── CMakeLists.txt          # Configuração do build (CMake + Qt)
├── main.cpp              # Ponto de entrada da aplicação
├── README.md             # Este arquivo
├── src/
│   └── ui/              # Interface gráfica (Qt Widgets)
│       ├── mainwindow.h
│       ├── mainwindow.cpp
│       └── mainwindow.ui
└── build/               # Diretório de build (gerado automaticamente)
```

---

## 🚀 Status Atual

O projeto está nos **primeiros passos**. Por enquanto temos:

- ✅ Estrutura base Qt configurada (CMake + Qt6)
- ✅ Janela principal (MainWindow) criada e compilando
- ⚙️ funcional
- ⚙️ Banco de dados (SQLite via QtSql) — Planejado
- ⚙️ CRUD de livros — Planejado
- ⚙️ CRUD de autores — Planejado
- ⚙️ Home/Estante — Planejado

---

## 🛠 Como Compilar

### Pré-requisitos

- CMake 3.19+
- Qt 6.5+ (compilados com MinGW ou MSVC)
- C++ 17

### Build

```bash
# No diretório raiz do projeto:
mkdir build
cd build
cmake ..
cmake --build .
```

---

## 💡 Ideia do Projeto (Versão Informal)

Quando eu li um livro massa, quero poder voltar e ver o que eu achei na época. Aí montei essa ideia: uma estante virtual onde eu controlo o que estou lendo, o que pretendo ler e o que já li. Para os livros que terminei, ainda tenho um espaço pra escrever o que achei — mais pro meu uso pessoal, nada de sinopsess de publisher.

A parte de autores também vai ajudar bastante, especialmente quando eu quiser ver tudo que um autor escreveu e tenho na minha estante.

---

## 📋 Tecnologias

- **Linguagem:** C++17
- **Framework:** Qt 6 (Widgets, Sql, Core)
- **Build:** CMake
- **Banco de Dados:** SQLite (via QtSql)
- **Plataforma:** Desktop (Windows/macOS/Linux)

---

## 📌 To-Do (Proximos Passos)

1. Configurar banco de dados SQLite
2. Criar classes Modelo (Livro, Autor)
3. Implementar tela de listagem de livros (Home/Estante)
4. Implementar tela de cadastro de livros
5. Implementar tela de cadastro de autores
6. Adicionar campo de resumo pessoal

---

*Projeto em desenvolvimento.*
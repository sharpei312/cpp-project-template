# 📐 CPP Project Template

> Um projeto C++ profissional com estrutura moderna, Gitflow e desenvolvimento dirigido por testes (TDD).

## 🎯 Objetivo

Este projeto demonstra as melhores práticas de desenvolvimento em C++, incluindo:
- Estrutura de diretórios padronizada
- Versionamento com Gitflow
- Desenvolvimento Dirigido por Testes (TDD)
- Automação com Makefile
- Gestão de issues com Kanban

## 📦 Estrutura do Projeto

```
cpp-project-template/
├── src/              # Código-fonte principal
├── include/          # Headers e interfaces (.hpp)
├── bin/              # Executáveis e arquivos compilados
├── test/             # Testes e casos de teste
├── doc/              # Documentação
├── README.md         # Este arquivo
├── .gitignore        # Configuração Git
└── Makefile          # Automação de compilação
```

## 🚀 Como Compilar

### Compilar o Projeto Principal
```bash
make build
```

### Compilar Testes
```bash
make test
./bin/testeRegressivo.exe
```

### Limpar Compilação
```bash
make clean
```

## 🔧 Funcionalidades Implementadas

### 1️⃣ Cálculo de Fatorial
- **Descrição:** Calcula o fatorial de um número inteiro
- **Branch:** `feat/calcularFatorial`
- **Status:** ✅ Implementado e testado

### 2️⃣ Cálculo de Fibonacci
- **Descrição:** Calcula a sequência de Fibonacci
- **Branch:** `feat/calcularFibonacci`
- **Status:** ✅ Implementado e testado

## 📋 Fluxo de Desenvolvimento (Gitflow)

```
master (produção)
  ↑
staging (pré-produção)
  ↑
develop (desenvolvimento)
  ├─ feat/calcularFatorial
  ├─ feat/calcularFibonacci
  └─ ... outras features
```

### Passos para Nova Funcionalidade:

1. Criar **issue** no board "Sprint Backlog"
2. Mover para "Doing"
3. Criar branch: `git checkout -b feat/nomeFeature`
4. Escrever testes em `test/main.cpp`
5. Implementar em `src/` e `include/`
6. Passar todos os testes: `make test`
7. Commit em `develop`
8. Mover issue para "Waiting Acceptance"
9. P.O. aprova → mover para "Done"
10. Merge em `staging`

## 🧪 Testes

Todos os testes estão localizados em `test/main.cpp` e podem ser compilados com:

```bash
make test
./bin/testeRegressivo.exe
```

## 📚 Referências

- [Gitflow - Atlassian](https://www.atlassian.com/br/git/tutorials/comparing-workflows/gitflow-workflow)
- [TDD - Test Driven Development](https://pt.wikipedia.org/wiki/Test-driven_development)
- [Makefile Tutorial](https://www.gnu.org/software/make/manual/)

## 👤 Autor

Desenvolvido como projeto acadêmico UFOP - Engenharia de Software 1

## 📄 Licença

Este projeto está disponível como exemplo educacional.

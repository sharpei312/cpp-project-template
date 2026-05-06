# ===== VARIÁVEIS =====
CC = g++
CFLAGS = -Wall -Wextra -std=c++11
SRCDIR = src
INCDIR = include
BINDIR = bin
TESTDIR = test
OBJDIR = $(BINDIR)/obj

# ===== TARGETS AUXILIARES =====
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SOURCES))

# ===== TARGETS PADRÃO =====
.PHONY: build test clean help

# ===== TARGET: HELP =====
help:
	@echo "╔════════════════════════════════════════╗"
	@echo "║       Makefile - CPP Project Template  ║"
	@echo "╚════════════════════════════════════════╝"
	@echo ""
	@echo "Targets disponíveis:"
	@echo "  make build      - Compila o projeto principal"
	@echo "  make test       - Compila e executa os testes"
	@echo "  make clean      - Remove arquivos compilados"
	@echo "  make help       - Mostra esta mensagem"
	@echo ""

# ===== TARGET: BUILD =====
build: $(BINDIR)/main.exe
	@echo "✅ Compilação concluída!"

$(BINDIR)/main.exe: $(OBJECTS) $(OBJDIR)/main.o
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) $^ -o $@
	@echo "📦 Executável criado: $@"

# ===== TARGET: OBJETOS =====
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@
	@echo "⚙️  Compilado: $<"

# ===== TARGET: TESTES =====
test: $(BINDIR)/testeRegressivo.exe
	@echo ""
	@echo "🧪 Executando testes..."
	@echo ""
	@./$(BINDIR)/testeRegressivo.exe

$(BINDIR)/testeRegressivo.exe: $(OBJDIR)/bib.o $(OBJDIR)/test_main.o
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) $^ -o $@
	@echo "📦 Teste criado: $@"

$(OBJDIR)/test_main.o: $(TESTDIR)/main.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@
	@echo "⚙️  Compilado: $<"

# ===== TARGET: CLEAN =====
clean:
	@echo "🧹 Limpando arquivos compilados..."
	@rm -rf $(BINDIR)
	@echo "✅ Limpeza concluída!"

# ===== TARGET: RUN =====
run: build
	@echo ""
	@echo "▶️  Executando programa..."
	@echo ""
	@./$(BINDIR)/main.exe

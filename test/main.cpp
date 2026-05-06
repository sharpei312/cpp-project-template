#include <iostream>
#include <cassert>
#include "../include/bib.hpp"

// ==================== TESTES DE FATORIAL ====================

void testarFatorial() {
    std::cout << "\n=== Testes: Cálculo de Fatorial ===" << std::endl;
    
    // Teste 1: Fatorial de 0
    assert(calcularFatorial(0) == 1);
    std::cout << "✓ Fatorial de 0 = 1" << std::endl;
    
    // Teste 2: Fatorial de 1
    assert(calcularFatorial(1) == 1);
    std::cout << "✓ Fatorial de 1 = 1" << std::endl;
    
    // Teste 3: Fatorial de 5
    assert(calcularFatorial(5) == 120);
    std::cout << "✓ Fatorial de 5 = 120" << std::endl;
    
    // Teste 4: Fatorial de 10
    assert(calcularFatorial(10) == 3628800);
    std::cout << "✓ Fatorial de 10 = 3628800" << std::endl;
    
    // Teste 5: Número negativo
    assert(calcularFatorial(-1) == -1);
    std::cout << "✓ Fatorial de -1 = -1 (erro esperado)" << std::endl;
    
    std::cout << "✅ Todos os testes de Fatorial passaram!" << std::endl;
}

// ==================== TESTES DE FIBONACCI ====================

void testarFibonacci() {
    std::cout << "\n=== Testes: Cálculo de Fibonacci ===" << std::endl;
    
    // Teste 1: Fibonacci de 0
    assert(calcularFibonacci(0) == 0);
    std::cout << "✓ Fibonacci de 0 = 0" << std::endl;
    
    // Teste 2: Fibonacci de 1
    assert(calcularFibonacci(1) == 1);
    std::cout << "✓ Fibonacci de 1 = 1" << std::endl;
    
    // Teste 3: Fibonacci de 5
    assert(calcularFibonacci(5) == 5);
    std::cout << "✓ Fibonacci de 5 = 5" << std::endl;
    
    // Teste 4: Fibonacci de 7
    assert(calcularFibonacci(7) == 13);
    std::cout << "✓ Fibonacci de 7 = 13" << std::endl;
    
    // Teste 5: Fibonacci de 10
    assert(calcularFibonacci(10) == 55);
    std::cout << "✓ Fibonacci de 10 = 55" << std::endl;
    
    // Teste 6: Número negativo
    assert(calcularFibonacci(-1) == -1);
    std::cout << "✓ Fibonacci de -1 = -1 (erro esperado)" << std::endl;
    
    std::cout << "✅ Todos os testes de Fibonacci passaram!" << std::endl;
}

// ==================== FUNÇÃO MAIN ====================

int main() {
    std::cout << "╔════════════════════════════════════════╗" << std::endl;
    std::cout << "║   TESTES REGRESSIVOS - CPP PROJECT    ║" << std::endl;
    std::cout << "╚════════════════════════════════════════╝" << std::endl;
    
    try {
        testarFatorial();
        testarFibonacci();
        
        std::cout << "\n╔════════════════════════════════════════╗" << std::endl;
        std::cout << "║  ✅ TODOS OS TESTES PASSARAM COM ÊXITO║" << std::endl;
        std::cout << "╚════════════════════════════════════════╝" << std::endl;
        
        return 0;
    } catch (const std::exception& e) {
        std::cout << "\n❌ Erro ao executar testes: " << e.what() << std::endl;
        return 1;
    }
}

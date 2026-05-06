#include <iostream>
#include <cassert>
#include "../include/bib.hpp"
using namespace std;

// ==================== TESTES DE FATORIAL ====================

void testarFatorial() {
    cout << "\n=== Testes: Cálculo de Fatorial ===" << endl;
    
    // Teste 1: Fatorial de 0
    assert(calcularFatorial(0) == 1);
    cout << "✓ Fatorial de 0 = 1" << endl;
    
    // Teste 2: Fatorial de 1
    assert(calcularFatorial(1) == 1);
    cout << "✓ Fatorial de 1 = 1" << endl;
    
    // Teste 3: Fatorial de 5
    assert(calcularFatorial(5) == 120);
    cout << "✓ Fatorial de 5 = 120" << endl;
    
    // Teste 4: Fatorial de 10
    assert(calcularFatorial(10) == 3628800);
    cout << "✓ Fatorial de 10 = 3628800" << endl;
    
    // Teste 5: Número negativo
    assert(calcularFatorial(-1) == -1);
    cout << "✓ Fatorial de -1 = -1 (erro esperado)" << endl;
    
    cout << "✅ Todos os testes de Fatorial passaram!" << endl;
}

// ==================== TESTES DE FIBONACCI ====================

void testarFibonacci() {
    cout << "\n=== Testes: Cálculo de Fibonacci ===" << endl;
    
    // Teste 1: Fibonacci de 0
    assert(calcularFibonacci(0) == 0);
    cout << "✓ Fibonacci de 0 = 0" << endl;
    
    // Teste 2: Fibonacci de 1
    assert(calcularFibonacci(1) == 1);
    cout << "✓ Fibonacci de 1 = 1" << endl;
    
    // Teste 3: Fibonacci de 5
    assert(calcularFibonacci(5) == 5);
    cout << "✓ Fibonacci de 5 = 5" << endl;
    
    // Teste 4: Fibonacci de 7
    assert(calcularFibonacci(7) == 13);
    cout << "✓ Fibonacci de 7 = 13" << endl;
    
    // Teste 5: Fibonacci de 10
    assert(calcularFibonacci(10) == 55);
    cout << "✓ Fibonacci de 10 = 55" << endl;
    
    // Teste 6: Número negativo
    assert(calcularFibonacci(-1) == -1);
    cout << "✓ Fibonacci de -1 = -1 (erro esperado)" << endl;
    
    cout << "✅ Todos os testes de Fibonacci passaram!" << endl;
}

// ==================== FUNÇÃO MAIN ====================

int main() {
    cout << "╔════════════════════════════════════════╗" << endl;
    cout << "║   TESTES REGRESSIVOS - CPP PROJECT    ║" << endl;
    cout << "╚════════════════════════════════════════╝" << endl;
    
    try {
        testarFatorial();
        testarFibonacci();
        
        cout << "\n╔════════════════════════════════════════╗" << endl;
        cout << "║  ✅ TODOS OS TESTES PASSARAM COM ÊXITO║" << endl;
        cout << "╚════════════════════════════════════════╝" << endl;
        
        return 0;
    } catch (const exception& e) {
        cout << "\n❌ Erro ao executar testes: " << e.what() << endl;
        return 1;
    }
}

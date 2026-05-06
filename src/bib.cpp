#include "../include/bib.hpp"

// Implementação: Cálculo de Fatorial
int calcularFatorial(int n) {
    if (n < 0) return -1; // Erro: número negativo
    if (n == 0 || n == 1) return 1;
    
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Implementação: Cálculo de Fibonacci
int calcularFibonacci(int n) {
    if (n < 0) return -1; // Erro: índice negativo
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    int anterior = 0;
    int atual = 1;
    for (int i = 2; i <= n; i++) {
        int proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
    return atual;
}

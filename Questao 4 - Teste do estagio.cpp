#include <stdio.h>
#define TAM 5 

typedef struct {
    char estado[3]; 
    float faturamento; 
} FaturamentoEstado;

int main() {
    FaturamentoEstado estados[TAM] = {
        {"SP", 67836.43},
        {"RJ", 36678.66},
        {"MG", 29229.88},
        {"ES", 27165.48},
        {"Outros", 19849.53}
    };
    float soma_faturamento = 0;
    int i;

    for (i = 0; i < TAM; i++) {
        soma_faturamento += estados[i].faturamento;
    }

    for (i = 0; i < TAM; i++) {
        float percentual = (estados[i].faturamento / soma_faturamento) * 100;
        printf("%s: %.2f%%\n", estados[i].estado, percentual);
    }

    return 0;
}

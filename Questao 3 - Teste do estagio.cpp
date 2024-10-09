#include <stdio.h>
#include <stdlib.h>

#define TAM 30 

typedef struct {
    int dia;
    float faturamento;
} FaturamentoDiario;

int main() {
    FaturamentoDiario faturamento[TAM];
    int i, dias_com_faturamento = 0;
    float soma_faturamento = 0, media_mensal;
    float menor_faturamento = FLT_MAX, maior_faturamento = FLT_MIN;
    int dias_acima_media = 0;

    printf("Digite os valores de faturamento para cada dia do mês:\n");
    for (i = 0; i < TAM; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%f", &faturamento[i].faturamento);
        faturamento[i].dia = i + 1;
        if (faturamento[i].faturamento > 0) {
            dias_com_faturamento++;
            soma_faturamento += faturamento[i].faturamento;
            if (faturamento[i].faturamento < menor_faturamento) {
                menor_faturamento = faturamento[i].faturamento;
            }
            if (faturamento[i].faturamento > maior_faturamento) {
                maior_faturamento = faturamento[i].faturamento;
            }
        }
    }

    media_mensal = soma_faturamento / dias_com_faturamento;

    for (i = 0; i < TAM; i++) {
        if (faturamento[i].faturamento > media_mensal) {
            dias_acima_media++;
        }
    }

    printf("Menor valor de faturamento: %.2f\n", menor_faturamento);
    printf("Maior valor de faturamento: %.2f\n", maior_faturamento);
    printf("Número de dias acima da média: %d\n", dias_acima_media);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, tam;
    
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';

    tam = strlen(str);

    for (i = 0, j = tam - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("String invertida: %s\n", str);

    return 0;
}

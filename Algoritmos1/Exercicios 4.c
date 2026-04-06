#include <stdio.h>

int main() {

    // 1) Múltiplos de 7 menores que 1000
    printf("\n1) Multiplos de 7 menores que 1000:\n");
    int i = 7;
    while (i < 1000) {
        printf("%d ", i);
        i += 7;
    }

    // 2) Soma até digitar 0
    printf("\n\n2) Soma de numeros (0 para parar):\n");
    float num, soma = 0;
    printf("Digite um numero:\n");
    scanf("%f", &num);
    while (num != 0) {
        soma += num;
        scanf("%f", &num);
    }
    printf("Soma = %.2f\n", soma);

    // 3) Média até digitar 0
    printf("\n3) Media de numeros (0 para parar):\n");
    soma = 0;
    int contador = 0;
    printf("Digite um numero:\n");
    scanf("%f", &num);
    while (num != 0) {
        soma += num;
        contador++;
        scanf("%f", &num);
    }
    if (contador > 0)
        printf("Media = %.2f\n", soma / contador);
    else
        printf("Nenhum numero valido.\n");

    // 4) Maior número
    printf("\n4) Maior numero:\n");
    int n, maior = 0;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    while (n > 0) {
        if (n > maior)
            maior = n;
        scanf("%d", &n);
    }
    printf("Maior numero = %d\n", maior);

    // 5) Pares e ímpares
    printf("\n5) Contagem de pares e impares:\n");
    int pares = 0, impares = 0;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    while (n > 0) {
        if (n % 2 == 0)
            pares++;
        else
            impares++;
        scanf("%d", &n);
    }
    printf("Pares = %d\n", pares);
    printf("Impares = %d\n", impares);

    // 6) Menor número
    printf("\n6) Menor numero:\n");
    int menor;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    if (n > 0) {
        menor = n;
        while (n > 0) {
            if (n < menor)
                menor = n;
            scanf("%d", &n);
        }
        printf("Menor numero = %d\n", menor);
    } else {
        printf("Nenhum numero valido.\n");
    }

    // 7) Ímpares menores que o número
    printf("\n7) Impares menores que um numero:\n");
    int num2, j = 1;
    printf("Digite um numero:\n");
    scanf("%d", &num2);
    while (j < num2) {
        if (j % 2 != 0)
            printf("%d ", j);
        j++;
    }

    // 8) Intervalo com X < Y obrigatório
    printf("\n\n8) Intervalo (X menor que Y):\n");
    int x, y;
    do {
        printf("Digite X (menor que Y):\n");
        scanf("%d", &x);
        printf("Digite Y:\n");
        scanf("%d", &y);
    } while (x >= y);

    i = x + 1;
    while (i < y) {
        printf("%d ", i);
        i++;
    }

    // 9) Intervalo descobrindo menor e maior
    printf("\n\n9) Intervalo automatico:\n");
    int menor2, maior2;
    printf("Digite X:\n");
    scanf("%d", &x);
    printf("Digite Y:\n");
    scanf("%d", &y);

    if (x < y) {
        menor2 = x;
        maior2 = y;
    } else {
        menor2 = y;
        maior2 = x;
    }

    i = menor2 + 1;
    while (i < maior2) {
        printf("%d ", i);
        i++;
    }

    // 10) Múltiplos de 9 entre 100 e 1000
    printf("\n\n10) Multiplos de 9 entre 100 e 1000:\n");
    i = 100;
    while (i <= 1000) {
        if (i % 9 == 0)
            printf("%d ", i);
        i++;
    }

    printf("\n");
    return 0;
}

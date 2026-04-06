#include <stdio.h>

int main() {

    int i, j; // <-- declarar aqui resolve vários erros

    // 1) Tabuada de um número
    printf("\n1) Tabuada:\n");
    int num;
    printf("Digite um numero de 1 a 9:\n");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    // 2) Tabuada completa
    printf("\n2) Tabuada completa:\n");
    for (i = 1; i <= 9; i++) {
        printf("\nNumero %d:\n", i);
        for (j = 1; j <= 9; j++) {
            printf("%d + %d = %d\n", i, j, i + j);
            printf("%d - %d = %d\n", i, j, i - j);
            printf("%d x %d = %d\n", i, j, i * j);
            printf("%d / %d = %.2f\n", i, j, (float)i / j);
        }
    }

    // 3) Número primo
    printf("\n3) Verificar numero primo:\n");
    int n, primo = 1;
    printf("Digite um numero:\n");
    scanf("%d", &n);

    if (n <= 1) {
        primo = 0;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo)
        printf("Numero primo\n");
    else
        printf("Nao e primo\n");

    // 4) Fibonacci
    printf("\n4) Fibonacci:\n");
    int a = 1, b = 1, c;
    printf("%d %d ", a, b);

    for (i = 3; i <= 30; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    // 5) Pares e ímpares
    printf("\n\n5) Pares e impares:\n");
    int valor, pares = 0, impares = 0;

    for (i = 1; i <= 20; i++) {
        printf("Digite um numero:\n");
        scanf("%d", &valor);

        if (valor % 2 == 0)
            pares++;
        else
            impares++;
    }

    printf("Pares = %d\n", pares);
    printf("Impares = %d\n", impares);

    // 6) Menor número
    printf("\n6) Menor numero:\n");
    int menor;

    for (i = 1; i <= 15; i++) {
        printf("Digite um numero:\n");
        scanf("%d", &valor);

        if (i == 1 || valor < menor)
            menor = valor;
    }

    printf("Menor numero = %d\n", menor);

    // 7) Pares no intervalo
    printf("\n7) Pares no intervalo:\n");
    int x, y, menor2, maior2;

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

    for (i = menor2 + 1; i < maior2; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
    }

    // 8) Intervalo decrescente
    printf("\n\n8) Intervalo decrescente:\n");

    printf("Digite X:\n");
    scanf("%d", &x);
    printf("Digite Y:\n");
    scanf("%d", &y);

    if (x > y) {
        maior2 = x;
        menor2 = y;
    } else {
        maior2 = y;
        menor2 = x;
    }

    for (i = maior2; i >= menor2; i--) {
        printf("%d ", i);
    }

    // 9) Soma
    printf("\n\n9) Soma de 100 a 200:\n");
    int soma = 0;

    for (i = 100; i <= 200; i++) {
        soma += i;
    }

    printf("Soma = %d\n", soma);

    // 10) Múltiplos de 9
    printf("\n10) Multiplos de 9:\n");
    for (i = 100; i <= 1000; i++) {
        if (i % 9 == 0)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}

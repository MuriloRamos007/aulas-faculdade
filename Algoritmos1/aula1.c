#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int a, b, multi;

    system("color 0A");
    system("cls");

    printf("=========================================\n");
    printf("             MULTIPLEX\n");
    printf("=========================================\n\n");

    printf("[1] Digite o primeiro número: ");
    scanf("%d", &a);

    printf("[2] Digite o segundo número: ");
    scanf("%d", &b);

    multi = a * b;

    printf("\n=========================================\n");
    printf(" Resultado Final\n");
    printf(" %d x %d = %d\n", a, b, multi);
    printf("=========================================\n");

    printf("\nPressione ENTER para finalizar...");
    getchar();
    getchar();

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, multi;

    system("color 0A");
    system("cls");

    printf("=========================================\n");
    printf("             MULTIPLEX\n");
    printf("=========================================\n\n");

    printf("[1] Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("[2] Digite o segundo numero: ");
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

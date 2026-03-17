#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int a, b, c, notaF;

    system("color 0A");
    system("cls");

    printf("=========================================\n");
    printf("             GRADEPLEX\n");
    printf("=========================================\n\n");

    printf("[1] Digite a primeira nota: ");
    scanf("%d", &a);

    printf("[2] Digite a segunda nota: ");
    scanf("%d", &b);

    printf("[3] Digite a terceira nota: ");
    scanf("%d", &c);

    notaF = (a+b+c)/3;

    printf("\n=========================================\n");
    printf(" Resultado Final\n");
    printf(" ()%d + %d + %d) / 3 = %d\n", a, b, c, notaF);
    printf("=========================================\n");

    printf("\nPressione ENTER para finalizar...");
    system("pause");

    return 0;
}

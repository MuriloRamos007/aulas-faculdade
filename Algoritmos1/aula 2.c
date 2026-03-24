#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, media;

    printf("=========================================\n");
    printf("              APROVEX\n");
    printf("=========================================\n\n");

    printf("[1] Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("[2] Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("\n=========================================\n");
    printf("             RESULTADO FINAL\n");
    printf("=========================================\n");

    printf("Nota 1: %.1f\n", nota1);
    printf("Nota 2: %.1f\n", nota2);
    printf("Média : %.1f\n\n", media);

    if(media >= 6.0){
        printf(" Aluno APROVADO!\n");
    }else{
        printf("Aluno REPROVADO.\n");
    }

    printf("\nPressione ENTER para finalizar...");
    getchar(); // limpa buffer
    getchar(); // espera ENTER

    return 0;
}

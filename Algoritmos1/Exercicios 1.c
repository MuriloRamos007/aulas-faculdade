#include <stdio.h>
#include <stdlib.h>

int main(){

    int opcao;

    system("color 0B");

    do{

        system("cls");

        printf("=========================================\n");
        printf("      ALGORITMOS E PROGRAMACAO I\n");
        printf("           LISTA 1\n");
        printf("=========================================\n\n");

        printf("1 - Media ponderada\n");
        printf("2 - Novo salario (25%% aumento)\n");
        printf("3 - Salario liquido\n");
        printf("4 - Converter horario em minutos\n");
        printf("5 - Calcular idade\n");
        printf("6 - Calcular degraus da escada\n");
        printf("0 - Sair\n\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        system("cls");

        switch(opcao){

        case 1:{
            float n1,n2,n3,p1,p2,p3,media;

            printf("=== MEDIA PONDERADA ===\n\n");

            printf("Nota 1: ");
            scanf("%f",&n1);
            printf("Peso 1: ");
            scanf("%f",&p1);

            printf("Nota 2: ");
            scanf("%f",&n2);
            printf("Peso 2: ");
            scanf("%f",&p2);

            printf("Nota 3: ");
            scanf("%f",&n3);
            printf("Peso 3: ");
            scanf("%f",&p3);

            media = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);

            printf("\nMedia ponderada = %.2f\n",media);
            break;
        }

        case 2:{
            float salario, novo;

            printf("=== AUMENTO SALARIAL ===\n\n");

            printf("Salario atual: ");
            scanf("%f",&salario);

            novo = salario * 1.25;

            printf("\nNovo salario = %.2f\n",novo);
            break;
        }

        case 3:{
            float bruto, liquido, grat, imposto;

            printf("=== SALARIO LIQUIDO ===\n\n");

            printf("Salario bruto: ");
            scanf("%f",&bruto);

            grat = bruto * 0.05;
            imposto = bruto * 0.07;

            liquido = bruto + grat - imposto;

            printf("\nSalario liquido = %.2f\n",liquido);
            break;
        }

        case 4:{
            int h,m,total;

            printf("=== CONVERTER HORARIO ===\n\n");

            printf("Horas: ");
            scanf("%d",&h);

            printf("Minutos: ");
            scanf("%d",&m);

            total = h*60 + m;

            printf("\nTotal em minutos = %d\n",total);
            break;
        }

        case 5:{
            int nasc, atual, idade, idade2030;

            printf("=== CALCULO DE IDADE ===\n\n");

            printf("Ano de nascimento: ");
            scanf("%d",&nasc);

            printf("Ano atual: ");
            scanf("%d",&atual);

            idade = atual - nasc;
            idade2030 = 2030 - nasc;

            printf("\nIdade atual = %d\n",idade);
            printf("Idade em 2030 = %d\n",idade2030);
            break;
        }

        case 6:{
            float degrau, altura;
            int qtd;

            printf("=== ESCADA ===\n\n");

            printf("Altura de cada degrau (cm): ");
            scanf("%f",&degrau);

            printf("Altura que deseja alcancar (cm): ");
            scanf("%f",&altura);

            qtd = altura / degrau;

            printf("\nVoce deve subir %d degraus\n",qtd);
            break;
        }

        case 0:
            printf("Encerrando programa...\n");
            break;

        default:
            printf("Opcao invalida!\n");
        }

        if(opcao != 0){
            printf("\n\nPressione ENTER para voltar ao menu...");
            getchar();
            getchar();
        }

    }while(opcao != 0);

    return 0;
}

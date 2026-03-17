#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main(){

    int op;

    system("color 0A");

    do{

        system("cls");

        printf("=========================================\n");
        printf("   ALGORITMOS E PROGRAMACAO I - LISTA 02\n");
        printf("=========================================\n\n");

        printf("1 - Mostrar mensagem\n");
        printf("2 - Mostrar mensagem em 3 linhas\n");
        printf("3 - Media de 4 numeros\n");
        printf("4 - Antecessor e sucessor\n");
        printf("5 - Converter Celsius\n");
        printf("6 - Area do triangulo\n");
        printf("7 - Km/h para m/s\n");
        printf("8 - Area da circunferencia\n");
        printf("9 - Triplo de um numero\n");
        printf("10 - Inverter numero CDU\n");
        printf("0 - Sair\n\n");

        printf("Escolha: ");
        scanf("%d",&op);

        system("cls");

        switch(op){

        case 1:
            printf("Eu vou aprender a programar em Linguagem C na disciplina Algoritmos e Programacao I\n");
        break;

        case 2:
            printf("Eu vou aprender a programar em Linguagem C\n");
            printf("na disciplina\n");
            printf("Algoritmos e Programacao I\n");
        break;

        case 3:{
            int a,b,c,d;
            float media;

            printf("Digite 4 numeros inteiros:\n");
            scanf("%d%d%d%d",&a,&b,&c,&d);

            media = (a+b+c+d)/4.0;

            printf("Media = %.2f\n",media);
        break;
        }

        case 4:{
            int n;

            printf("Digite um numero: ");
            scanf("%d",&n);

            printf("Antecessor = %d\n",n-1);
            printf("Sucessor = %d\n",n+1);
        break;
        }

        case 5:{
            float c,f,k;

            printf("Temperatura em Celsius: ");
            scanf("%f",&c);

            f = (c * 9/5) + 32;
            k = c + 273.15;

            printf("Fahrenheit = %.2f\n",f);
            printf("Kelvin = %.2f\n",k);
        break;
        }

        case 6:{
            float base,altura,area;

            printf("Base do triangulo: ");
            scanf("%f",&base);

            printf("Altura do triangulo: ");
            scanf("%f",&altura);

            area = (base * altura)/2;

            printf("Area = %.2f\n",area);
        break;
        }

        case 7:{
            float kmh, ms;

            printf("Velocidade em Km/h: ");
            scanf("%f",&kmh);

            ms = kmh / 3.6;

            printf("Velocidade em m/s = %.2f\n",ms);
        break;
        }

        case 8:{
            float r, area;

            printf("Raio da circunferencia: ");
            scanf("%f",&r);

            area = PI * r * r;

            printf("Area = %.2f\n",area);
        break;
        }

        case 9:{
            float n;

            printf("Digite um numero real: ");
            scanf("%f",&n);

            printf("Triplo = %.2f\n",n*3);
        break;
        }

        case 10:{
            int num, invertido;
            int c,d,u;

            printf("Digite um numero de 3 digitos (CDU): ");
            scanf("%d",&num);

            c = num / 100;
            d = (num % 100) / 10;
            u = num % 10;

            invertido = u*100 + d*10 + c;

            printf("Numero invertido = %d\n",invertido);
        break;
        }

        case 0:
            printf("Encerrando...\n");
        break;

        default:
            printf("Opcao invalida!\n");
        }

        if(op != 0){
            printf("\nPressione ENTER para voltar...");
            getchar();
            getchar();
        }

    }while(op != 0);

    return 0;
}

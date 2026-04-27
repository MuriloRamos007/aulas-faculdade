#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n===== MENU DE ESTUDOS =====\n");
        printf("1 - Media (simples e ponderada)\n");
        printf("2 - Porcentagem (salario)\n");
        printf("3 - Conversoes\n");
        printf("4 - Par ou Impar\n");
        printf("5 - Maior numero\n");
        printf("6 - Soma com WHILE (ate 0)\n");
        printf("7 - Tabuada\n");
        printf("8 - Numero primo\n");
        printf("9 - Fibonacci\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {

        case 1: {
            float n1, n2, n3, p1, p2, p3;

            printf("Digite 3 notas: ");
            scanf("%f %f %f", &n1, &n2, &n3);

            printf("Digite os pesos: ");
            scanf("%f %f %f", &p1, &p2, &p3);

            float media = (n1 + n2 + n3) / 3;
            float mediaP = (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3);

            printf("Media: %.2f\n", media);
            printf("Media ponderada: %.2f\n", mediaP);
            break;
        }

        case 2: {
            float salario;

            printf("Digite o salario: ");
            scanf("%f", &salario);

            float aumento = salario * 0.25;
            float novo = salario + aumento;

            printf("Novo salario: %.2f\n", novo);
            break;
        }

        case 3: {
            float c, kmh;

            printf("Digite temperatura em Celsius: ");
            scanf("%f", &c);

            float f = (c * 9/5) + 32;
            float k = c + 273.15;

            printf("Fahrenheit: %.2f | Kelvin: %.2f\n", f, k);

            printf("Digite velocidade km/h: ");
            scanf("%f", &kmh);

            float ms = kmh / 3.6;
            printf("m/s: %.2f\n", ms);
            break;
        }

        case 4: {
            int num;

            printf("Digite um numero: ");
            scanf("%d", &num);

            if (num % 2 == 0)
                printf("Par\n");
            else
                printf("Impar\n");

            break;
        }

        case 5: {
            int a, b;

            printf("Digite dois numeros: ");
            scanf("%d %d", &a, &b);

            if (a > b)
                printf("Maior: %d\n", a);
            else
                printf("Maior: %d\n", b);

            break;
        }

        case 6: {
            int num, soma = 0;

            printf("Digite numeros (0 para parar): ");
            scanf("%d", &num);

            while (num != 0) {
                soma += num;
                scanf("%d", &num);
            }

            printf("Soma: %d\n", soma);
            break;
        }

        case 7: {
            int n;

            printf("Digite um numero: ");
            scanf("%d", &n);

            for (int i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", n, i, n*i);
            }

            break;
        }

        case 8: {
            int num, primo = 1;

            printf("Digite um numero: ");
            scanf("%d", &num);

            if (num <= 1) primo = 0;

            for (int i = 2; i < num; i++) {
                if (num % i == 0) {
                    primo = 0;
                    break;
                }
            }

            if (primo)
                printf("Primo\n");
            else
                printf("Nao primo\n");

            break;
        }

        case 9: {
            int a = 1, b = 1, prox;

            printf("%d %d ", a, b);

            for (int i = 3; i <= 10; i++) {
                prox = a + b;
                printf("%d ", prox);
                a = b;
                b = prox;
            }

            printf("\n");
            break;
        }

        case 0:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
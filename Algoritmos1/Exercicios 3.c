#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int op;

    printf("=========== LISTA DE EXERCICIOS 3 ===========\n");
    printf("1 - Soma com regra do 10\n");
    printf("2 - Reajuste de salario\n");
    printf("3 - Maior entre dois numeros\n");
    printf("4 - Tres numeros em ordem crescente\n");
    printf("5 - Par ou impar\n");
    printf("6 - Classificacao peso/altura\n");
    printf("7 - Media final e conceito\n");
    printf("Escolha: ");
    scanf("%d",&op);

    switch(op){

    case 1:{
        int a,b,soma;
        printf("Digite dois valores: ");
        scanf("%d %d",&a,&b);

        soma = a + b;

        if(soma >= 10)
            soma += 5;
        else
            soma -= 7;

        printf("Resultado final: %d\n",soma);
        break;
    }

    case 2:{
        float sal,novo;
        printf("Digite o salario: ");
        scanf("%f",&sal);

        if(sal < 1000)
            novo = sal * 1.15;
        else if(sal <= 1500)
            novo = sal * 1.10;
        else
            novo = sal * 1.05;

        printf("Novo salario: %.2f\n",novo);
        break;
    }

    case 3:{
        int n1,n2;
        printf("Digite dois numeros: ");
        scanf("%d %d",&n1,&n2);

        if(n1 > n2)
            printf("Maior: %d\n",n1);
        else if(n2 > n1)
            printf("Maior: %d\n",n2);
        else
            printf("Numeros iguais\n");
        break;
    }

    case 4:{
        int a,b,c,temp;

        printf("Digite tres numeros: ");
        scanf("%d %d %d",&a,&b,&c);

        if(a>b){ temp=a; a=b; b=temp; }
        if(a>c){ temp=a; a=c; c=temp; }
        if(b>c){ temp=b; b=c; c=temp; }

        printf("Ordem crescente: %d %d %d\n",a,b,c);
        break;
    }
    
    case 5:{
        int n;
        printf("Digite um numero: ");
        scanf("%d",&n);

        if(n % 2 == 0)
            printf("PAR\n");
        else
            printf("IMPAR\n");
        break;
    }

    case 6:{
        float alt,peso;
        char classe;

        printf("Digite altura: ");
        scanf("%f",&alt);
        printf("Digite peso: ");
        scanf("%f",&peso);

        if(alt < 1.20){
            if(peso <= 60) classe='A';
            else if(peso <= 90) classe='D';
            else classe='G';
        }
        else if(alt <= 1.70){
            if(peso <= 60) classe='B';
            else if(peso <= 90) classe='E';
            else classe='H';
        }
        else{
            if(peso <= 60) classe='C';
            else if(peso <= 90) classe='F';
            else classe='I';
        }

        printf("Classificacao: %c\n",classe);
        break;
    }

    case 7:{
        float n1,n2,n3,media;
        char conceito;

        printf("Digite tres notas: ");
        scanf("%f %f %f",&n1,&n2,&n3);

        media = (n1+n2+n3)/3;

        if(media <= 5) conceito='E';
        else if(media <= 6) conceito='D';
        else if(media <= 7) conceito='C';
        else if(media <= 8) conceito='B';
        else conceito='A';

        printf("Media: %.2f\n",media);
        printf("Conceito: %c\n",conceito);
        break;
    }

    default:
        printf("Opcao invalida!\n");
    }

    return 0;
}

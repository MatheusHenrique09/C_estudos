#include <stdio.h>

int main(){

    double nota1,nota2,media;

    printf("Digite uma nota:");
    scanf("%lf",&nota1);

    printf("Digite uma outra nota:");
        scanf("%lf",&nota2);

    media = nota1 + nota2;

    printf("NOTA FINAL = %.1lf \n",media);

    if (media < 60.00){
        printf("REPROVADO");
    }
    else{
        printf("APROVADO");
    }

    return 0;
}
#include <stdio.h>

int main(){
    int N;
    double soma,media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d",&N);

    double num[N];

    for (size_t i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf",&num[i]);
    }

    for (size_t i = 0; i < N; i++)
    {
        soma = soma + num[i];
    }
    media = soma /N;

    printf("VALORES = ");
    for (size_t i = 0; i <N; i++)
    {
        printf("%.1lf  ",num[i]);
    }
    printf("\nSOMA = %.2lf\n",soma);
    printf("MEDIA = %.2lf",media);

    return 0;
}
#include <stdio.h>

int main() {
    int N, cont;
    double soma, media, percMenor16;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nome[N][50];
    int idade[N];
    double altura[N];

    for (int i = 0; i < N; i++) { 
        printf("\nDados da %dª pessoa: ", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", nome[i]); 

        printf("Idade: ");
        scanf("%d", &idade[i]);

        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }

    cont = 0;
    soma = 0;
    for (int i = 0; i < N; i++) {
        soma += altura[i];
        if (idade[i] < 16) {
            cont++;
        }
    }

    media = soma / N;
    percMenor16 = (cont > 0) ? (100.0 * cont / N) : 0;

    printf("Altura média: %.2lf\n", media);
    printf("Pessoas com menos de 16 anos: %.2lf%%\n", percMenor16);
    for (int i = 0; i < N; i++) {
        if (idade[i] < 16) {
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}

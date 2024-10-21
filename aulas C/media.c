#include <stdio.h>

int main() {
    char nome[50], nome2[50];
    int idade, idade2;
    double idademedia;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Idade: ");
    scanf("%d", &idade);

    while (getchar() != '\n');

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    fgets(nome2, sizeof(nome2), stdin);
    printf("Idade: ");
    scanf("%d", &idade2);

    idademedia = (idade + idade2) / 2.0;

    printf("A idade média de %s e %s é de %.1lf anos", nome, nome2, idademedia);

    return 0;
}

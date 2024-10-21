#include <stdio.h>

int main () {
    int c;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d",&c);

    int num[c];

    for (int i = 0; i < c; i++ ){
        printf("Digite um numero: ");
        scanf("%d",&num[i]);
    }
    printf("NUMEROS NEGATIVOS: \n");
    for (int i = 0; i <= c-1; i++ ){
    
        if (num[i] < 0 ){
            printf("%d\n",num[i]);
        }
    }
    
    return 0;
}
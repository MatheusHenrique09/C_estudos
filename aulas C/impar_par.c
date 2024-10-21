#include <stdio.h>

int main(){
    int cont,par,impar,num;

    cont = 0;

    printf("Digite um numero: ");
    scanf("%d",&num);

    while (num > 10) {
        if (num % 2== 0){
            par++;
        }
        else{
            impar++;
        }
        num++;
    }
    printf("Quantidade de par %d e impar %d",par,impar);


    return 0;
}

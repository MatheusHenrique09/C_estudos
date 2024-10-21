#include <stdio.h>

int main(){

    double vet[10];
    int n,i;

    printf("Digite quantos numeros vc quer guardar: \n");
    scanf("%d",&n);

    for (i = 0; i <= n-1; i++){
        printf("Digite um numero: \n");
        scanf("%lf",&vet[i]);
    }

    for (i = 0; i<= n-1; i++){
        printf("vet[%lf] \n",vet[i]);

    }
    return 0;
}

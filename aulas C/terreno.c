#include <stdio.h>

int main(){
        double l,c,area,preco,mq;

        printf("Digite a largura do terreno: ");
        scanf("%lf",&l);

        printf("Digite o comprimento do terreno: ");
        scanf("%lf",&c);

        area = l * c;

        printf("Digite o valor por metro quadrado: ");
        scanf("%lf",&mq);

        preco = area * mq;

        printf("Area do terreno = %.2lf \n",area);
        printf("Precodo do terreno =  %.2lf \n", preco);

    return 0;
}
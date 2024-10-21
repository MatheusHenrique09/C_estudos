#include <stdio.h>

int main(){
    int l,c,i,j;
    double cont1,cont2;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d",&l);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d",&c);

    double mat1[l][c],mat2[l][c];

    cont1 = 0;
    printf("Digite os elementos da 1ª linha \n");
    for(i = 0; i < l; i++){
         for(j = 0; j < l; j++){
            scanf("%lf",&mat1[i][j]);
            cont1 = cont1 + mat1[i][j];
        }
    }
    cont2 = 0;
    printf("Digite os elementos da 2ª linha \n");
    for(i = 0; i < l; i++){
         for(j = 0; j < l; j++){
            scanf("%lf",&mat2[i][j]);
            cont2 = cont2 + mat2[i][j];
        }
    }
    printf("\nVETOR GERADO:\n %.1lf \n %.1lf",cont1,cont2);

    return 0;
}
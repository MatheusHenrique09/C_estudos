#include <stdio.h>

int main(){
    int N,j,i,contN;

    printf("Qual a ordem da matriz? ");
    scanf("%d",&N);
 
    int mat[N][N];
    
     contN = 0;
    for(i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d",&mat[i][j]);
            if (mat[i][j] < 0 ){
                contN++;
            }
        }
      }   
   
    printf("DIAGONAL PRINCIPAL: \n");
    for ( i = 0; i < N; i++){
        printf("%d  ",mat[i][i]);
        
        }
 
    printf("\nQUANTIDADES DE NEGATIVOS = %d \n",contN);

   return 0;
}
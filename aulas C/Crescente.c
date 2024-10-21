#include <stdio.h>

int main(){
    int a,b;

    do
    { 
      printf("Digite dois numeros ");
            scanf("%d",&a);
            scanf("%d",&b);
            if (a > b){
                printf("CRESCENTE! \n");
            }
            else if(a < b){
                printf("DECRESCENTE! \n");   
            }   
    } while (a != b);
    
    return 0;
}
    
   


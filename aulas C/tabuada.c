#include <stdio.h>

int main(){

    int i,num,produto;

    printf("deseja a tabuada para qual valor? ");
    scanf("%d",&num);

    for (i = 0; i <= 10; i++){
        produto = i * num;
        printf("%d x %d = %d \n",num,i,produto);

    }

    return 0;
}
#include  <stdio.h>

void limp_entrada(){
    char c ;
    while((c = getchar()) != '\n' && c != EOF) {}
}

int main(){
    double c,f;
    char resp;

    do{
        printf("Digite a Temperatura em celsius: ");
        scanf("%lf",&c);

        f = 9.0 * c / 5.0 + 32.0;

        printf("Equivalente em Fhrnheit: %.1lf\n",f);
        printf("Deseja repetir (s/n)?");
        limp_entrada();
        scanf("%c",&resp);

     }while(resp == "s");
    
    return 0;
}

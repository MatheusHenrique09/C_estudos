#include <stdio.h>
#include <math.h>

int main(){ 
    double x1, x2, delta,a, b, c;

    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("Coeficiente a nao pode ser zero.\n");
    } else {
        delta = pow(b, 2.0) - 4 * a * c;

        if (delta < 0) {
            printf("Delta negativo, a equacao nao possui raizes reais.\n");
        } else if (delta == 0) {
            x1 = -b / (2.0 * a);
            printf("Delta igual a zero, a equacao possui uma raiz dupla: x1 = x2 = %.2lf\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2.0 * a);
            x2 = (-b - sqrt(delta)) / (2.0 * a);

            printf("x1 = %.4lf\n", x1);
            printf("x2 = %.4lf\n", x2);
        }
    }

    return 0;
}
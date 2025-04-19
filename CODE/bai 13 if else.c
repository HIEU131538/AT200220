#include <stdio.h>
#include <math.h>

int main() {
    double x, eps, term, E;
    int i = 1;
    double k = 1;


    printf("Nhap x: ");
    scanf("%lf", &x);
    printf("Nhap eps: ");
    scanf("%lf", &eps);


    E = 1;
    term = x;
    while (fabs(term) >= eps) {
        k *= i;
        term = pow(x, i) / k;
        E += term;
        i++;
    }

        printf("e mu %.2lf = %.10lf\n", x, E);
    return 0;
}

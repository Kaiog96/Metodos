#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double funcaof(double fx){

 return 4754.28 * ((1 - (pow(1 + fx, -48))) / fx)-50000;
}

double funcaog(double fg){

 return (4754.28 - 4754.28 * ((pow(1 + fg, -48))))/ 50000;
}

int main (){
    double  Erro = 0.1, x;
    printf("Digite o valor de X:");
    scanf("%lf", &x);
    while(fabs(funcaof(x)) > Erro){

        printf("\n\X = %lf", x);
        printf("\n\F(xn) = %lf", funcaof(x));
        x = funcaog(x);
    }
    printf("\n\X = %lf", x);
    printf("\n\F(xn) = %lf", funcaof(x));
    return 0;
}


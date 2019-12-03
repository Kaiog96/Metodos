#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float funcaof(float fx){

 return 4754.28 * ((1 - (pow(1 + fx, -48))) / fx)-50000;
}

float funcaog(float fg){

 return (228205.44 * fg * pow(1 + fg, -49) - 4754.28 + 4754.28 * ((pow(1 + fg, -48))))/ pow(fg,2);
}

int main (){
    float  Erro = 0.1, x;
    printf("Digite o valor de X:");
    scanf("%f", &x);
    while(fabs(funcaof(x)) > Erro){

        printf("\n\n\X = %f", x);
        printf("\n\n\F(x) = %f", funcaof(x));
        x = x - funcaof(x) / funcaog(x);
    }
    printf("\n\n\X = %f", x);
    printf("\n\n\F(x) = %f", funcaof(x));
    return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>



float funcao(float x){

 return 4754.28 * ((1 - (pow(1 + x, -48))) / x)-50000;//(pow(x,3)-7.5*pow(x,2)+12*x+3);

}

int main(){
 float a, b, aux, Erro = 0.01, iteracoes, xm, xx, Errox, Raiz;
 int i= 0, k, j;
 float fa, fx, fax;

printf("ALGORITMO DA BISSECCAO\n\n");


 printf("\n\Digite o intervalo A: ");
 scanf("%f", &a);
 printf("\n\Digite o intervalo B: ");
 scanf("%f", &b);

 iteracoes = 500;



 for(i=0;  fabs(funcao(xm)) > Erro; i++){
  k = i+0;
  xm = (a+b)/2.0;

  Errox = b-a;

  printf("\nIteracao: %d   %f   %f    %f    %f    %f %f   %f", i, a, b, xm, Errox, fa= funcao(a), fx= funcao(xm), fax= funcao(a) * funcao(xm));

  if(funcao(a)* funcao(b) < 0){
    if(funcao(xm) < 0 && funcao(a) < 0){
        a = xm;
    }
    if(funcao(xm) < 0 && funcao(b) < 0){
        b = xm;
    }
    if(funcao(xm) > 0 && funcao(a) > 0){
        a = xm;
    }
    if(funcao(xm) > 0 && funcao(b) > 0){
        b = xm;
    }
  }
  else{
  break;
  }
 }


 printf("\n\n\XM = %f", xm);



 return (0);
}

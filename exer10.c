#include <stdio.h>
#include <math.h>


double fatorial(int n){
  if(n==0)
  return 1;
  else
  for(int i=n-1;i>1;i--){n=n*i;}

  return n;
}

int par(int n){
//an= a1+(n-1).r
//Sequencia 2,4,6,8,10,12
    if(n<0){
      n=1;
    }
    return 2+(n-1)*2;
}

double umSobreImpar(int n){
 return 3+(n-1)*2;
}

double produtoParSobreImpar(int n, double x){
  return par(n)*pow(x,n)/fatorial(umSobreImpar(n));
}

double parSobreImpar(int n){
  return par(n)/umSobreImpar(n);//FRAÇÂO
}


double somaPrimeirosTermos(int n,double x){
  double razao=produtoParSobreImpar(2,x)-produtoParSobreImpar(1,x);
  double termo,soma=0.0;

  termo=produtoParSobreImpar(n,x);
 

  for(int i=0;i<n;i++){
    soma+=termo;
    termo=termo-razao;
  }

  return soma;
}


void execicioXX(){
    int n;
    double x;
    printf("Digite o valor de n e x");
    scanf("%d%lf",&n,&x);
    printf("Soma %lf",somaPrimeirosTermos(n,x));

}



int main(void){
  execicioXX();

    return 0;
}
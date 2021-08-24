#include <stdio.h>

int fatorial(int n){
  if(n==0)
  return 1;
  else
  for(int i=n-1;i>1;i--){n=n*i;}

  return n;
}


int par(int n){
//an= a1+(n-1).r
//Sequencia 2,4,6,8,10,12
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

void exercicio09(){
    int n;
    double x;
    printf("Digite o valor de n e de x");
    scanf("%d%lf",&n,&x);
    printf("%lf",produtoParSobreImpar(n,x));

}

int main(void){
  exercicio09();
  return 0;
}
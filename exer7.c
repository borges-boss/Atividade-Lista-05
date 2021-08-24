#include <stdio.h>
#include <math.h>


int par(int n){
//an= a1+(n-1).r
//Sequencia 2,4,6,8,10,12
    return 2+(n-1)*2;
}

double umSobreImpar(int n){
 return 3+(n-1)*2;
}

double parSobreImpar(int n){
  return par(n)/umSobreImpar(n);//FRAÇÂO
}


double produtoParSobreImpar(int n, double x){
  return par(n)*pow(x,n)/umSobreImpar(n);
}

double produtoPrimeirosTermos(int n,double x){
  double razao=produtoParSobreImpar(2,x)-produtoParSobreImpar(1,x);
  double termo,produto=1.0;

  termo=produtoParSobreImpar(n,x);

  while(termo>=produtoParSobreImpar(1,x)){
    produto=produto*termo;
    termo=termo-razao;
  }

  return produto;
}

void exercicio07(){
  int n;
  double x;
  printf("Digite os valores de n e x");
  scanf("%d%lf",&n,&x);
  printf("%lf",produtoPrimeirosTermos(n,x));
}


int main(void) {
  exercicio07();
  return 0;
}
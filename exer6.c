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

void exercicio06(){
  int n;
  double x;
  printf("Digite os valores de n e x\n");
  scanf("%d%lf",&n,&x);
  printf("%lf",produtoParSobreImpar(n,x));
  

}



int main(void) {
  exercicio06();
  return 0;
}
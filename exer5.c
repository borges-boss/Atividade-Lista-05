#include <stdio.h>

double umSobreImpar(int n){
    //an= a1+(n-1) . r
    //3,5,7,9,11
 return 3+(n-1)*2;
}

int par(int n){
//an= a1+(n-1).r
//Sequencia 2,4,6,8,10,12
    return 2+(n-1)*2;
}

double parSobreImpar(int n){
  return par(n)/umSobreImpar(n);//FRAÇÂO
}

 double somaParSobreImpar(int n){

double termo=parSobreImpar(n),soma=0,razao;
  //Descobrir razao 
  razao=4.0/5.0-2.0/3.0;
  printf("razao %lf\n",razao);

  while(termo>=2.0/3.0){
    soma+=termo;
    termo=termo-razao;
  }

  return soma;
}


void exercicio5(){
  int n=0;
  printf("Digite o valor de n");
  scanf("%d",&n);
  printf("O somatorio de n vale: %lf\n",somaParSobreImpar(n));

  printf("O n-esimo termo vale: %f\n",parSobreImpar(n));
}

int main(void) {
  
  exercicio5();
  return 0;
}
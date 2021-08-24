#include <stdio.h>

double umSobreImpar(int n){
    //an= a1+(n-1) . r
    //3,5,7,9,11
 return 3+(n-1)*2;
}



double somaUmSobreImpar(int n/*Posição do numero*/){
int soma=0,i;
n=umSobreImpar(n);
i=n;

while(i>=3){
soma+=i;
i=i-2;
}

return soma;
}

void exercicio4(){
  int n;
  printf("Digite o valor de n");
  scanf("%d",&n);
  printf("%lf",somaUmSobreImpar(n));

}



int main(void) {
  exercicio4();
  return 0;
}
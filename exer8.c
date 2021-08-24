#include <stdio.h>


void exercio08(){
  int n;
  printf("Digite o valor de n para calcular o fatorial");
  scanf("%d",&n);
  printf("!%d= %d",n,fatorial(n));
}

int main(void) {
  exercio08();
  return 0;
}
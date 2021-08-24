#include <stdio.h>


double umSobreImpar(int n){
    //an= a1+(n-1) . r
    //3,5,7,9,11
 return 3+(n-1)*2;
}

void exercicio3(){
    int n=0;
    printf("Digite o valor de N");
    scanf("%d",&n);
    printf("%lf",umSobreImpar(n));
}

int main(void){
  exercicio3();


}
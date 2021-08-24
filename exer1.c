#include <stdio.h>


int par(int n){
//an= a1+(n-1).r
//Sequencia 2,4,6,8,10,12
    return 2+(n-1)*2;
}


void exercicio01(){
int n;
    
    printf("Digite o valor de n\n");
    scanf("%d",&n);
    printf("%d",par(n));

}


int main(void){
 exercicio01();
    return 0;

}

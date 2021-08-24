#include <stdio.h>

/*USE A FUNÇÂO par(int n) DO EXERCICIO ANTERIOR*/

int par(int n){
//an= a1+(n-1).r
//Sequencia 2,4,6,8,10,12
    return 2+(n-1)*2;
}


void monstrarParesEmOrdemDecrescente(int n) {
    int num=par(n);

    printf("Numeros menores que N\n");
    while (num>=2)
    {

    if(num<par(n)){
      printf("%d\n",num);
    }
     
     num=num-2;//Razão 2
    }
    
    
}

void exercicio02()
{
    int n;

    printf("Digite o valor de n\n");
    scanf("%d", &n);
    monstrarParesEmOrdemDecrescente(n);
}

int main(void)
{
    exercicio02();
    return 0;
}
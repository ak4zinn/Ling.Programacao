//Exercicio 2
#include <stdio.h>

int main() {
    int n1, n2, adicao;
    
    printf("Digite um número:\n");
    scanf("%d", &n1);
    printf("Digite o segundo número:\n");
    scanf("%d", &n2);
    
    adicao=n1+n2;
    
    if(adicao > 20){
      adicao +=8;
    }else {
        adicao-=5;
    }
    printf("o resultado é:%d", adicao);
    return 0;
}
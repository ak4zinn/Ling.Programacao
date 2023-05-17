//Exercicio 2
#include <stdio.h>

int main() {
    int n1;
    
    printf("Digite um número:\n");
    scanf("%d", &n1);
    if(n1 %5 ==0){;
        printf("É divisível por 5:\n");
    }else{
        printf("Não é divisível por 5:\n");
    }
}
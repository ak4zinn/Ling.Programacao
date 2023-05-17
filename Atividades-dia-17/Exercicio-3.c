//Exercicio 3
#include <stdio.h>

int main() {
    int n1;
    
    printf("Digite um número:\n");
    scanf("%d", &n1);
    if(n1 %3 ==0){;
        printf("É divisível:\n", n1);
    }else{
        printf("Não é divisível:\n", n1);
    }
}
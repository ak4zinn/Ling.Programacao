//Exercício  1
#include <stdio.h>

int main() {
    int n1;
    int n2;
    int n3;
    int adicao;
    
    printf("Digite um número para realizarmos a soma:\n");
    scanf("%d", &n1);
     printf("Digite um número para realizarmos a soma:\n");
    scanf("%d", &n2);
    printf("Digite um número para realizarmos a soma:\n");
    scanf("%d", &n3);
    adicao = n1+n2+n3;
    if (adicao >= 10) {
        printf("O resultado é: %d\n", adicao );
    }
    else {
        return 0;
    }
}
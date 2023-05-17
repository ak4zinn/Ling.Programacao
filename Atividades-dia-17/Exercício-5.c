//Exercicio 5
#include <stdio.h>

int main() {
    char nome[40];
    int nota1, nota2, media;
    
    printf("Digite seu nome:\n");
    scanf("%s", nome);
    printf("Digite sua primeira nota:\n");
    scanf("%d", &nota1);
     printf("Digite sua segunda nota nota:\n");
    scanf("%d", &nota2);
    
    media = (nota1 + nota2) / 2;
    printf("Sua média é:\n%d", media);
    if(media >= 60){
        printf("Está aprovado\n");
    }else {
        printf("Está reprovado\n");
    }
}
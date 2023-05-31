#include<stdio.h>
int main() {
    float nota1, nota2, media;
    int resposta;

    printf("Primeira nota:");
    scanf("%f", &nota1);
    printf("Segunda nota:");
    scanf("%f", &nota2);
    media=(nota1+nota2/2);
    printf("media é:%f\n", media);
    printf("Digite 1 para continuar e 2 para sair\n");
    scanf("%d", &resposta);
    while(resposta == 1){
        return 0;
    }
}
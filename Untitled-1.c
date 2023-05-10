#include <stdio.h>
int main() {
char n;
printf ("Se quiser instalar windows digite 1, caso queira linux digite 2:\n");
printf("Digite umas das opções:\n");
scanf("%s", &n);
switch(n){
    case '1':
    printf("Intalar Windows");
    break;
    case '2':
    printf("Instalar Linux");
    break;
    default:
    printf("Opção inválida");
}
}

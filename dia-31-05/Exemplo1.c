#include <stdio.h>

int main() {
    int I;

    printf("Digite um  valor para I:");
    scanf("%d", &I);
    while(I!=0){
        printf("%d\n", I);
        printf("Digite valor:");
        scanf("%d", &I);
    }
}
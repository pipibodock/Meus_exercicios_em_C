#include <stdio.h>

int main(){

    int x;
    printf("Escolha um dos valores 1, 2, 3, 4:\n");
    scanf("%d", &x);

    switch(x){
        case 1: printf("o número é 1\n"); break;
        case 2: printf("o número é 2\n"); break;
        case 3: printf("o número é 3\n"); break;
        case 4: printf("o número é 4\n"); break;
        default: printf("escolha uma das opções\n");
    }
    return 0;
}

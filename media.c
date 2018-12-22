#include<stdio.h>

int main(){
    int A, B, C, D;
    printf("insira três números inteiros e vamos calcular a média:\n");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    D = (A + B + C)/3;
    printf("\n A média dos seus valores é: %d\n", D);
}

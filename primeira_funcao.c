#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Declaração de função, se faz com:
 * o tipo do função, ou seja, aquilo que se espera que ela retorne;
 * O nome da  função;
 * Entre parentese seus parâmetros e a delcaração dos tipos dos parâmetros;
 * Abre e fecha chaves.*/
int quadrado(int a){

    return a * a;
}

int main(){

    int x, y;
    printf("digite um valor inteiro:\n");
    scanf("%d", &x);
    y = quadrado(x);
    printf("O quadrado do valor digitado é: %d\n", y);
    return 0;
}

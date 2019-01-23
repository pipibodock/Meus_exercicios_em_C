#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    int idade;
};

int main(){

    /*A declaração de uma struct pode ser feita em forma de array
     * ou em uma matriz..
     * Para facilitar, podemos colocar uma struct dentro de um for
     * e trabalhar de diferentes maneiras.*/
    struct pessoa p[4];
    int i;
    for(i = 0; i < 4; i++){
        scanf("%d", &p[i].idade);
        printf("Idade: %d\n", p[i].idade);
    }
    return 0;
}

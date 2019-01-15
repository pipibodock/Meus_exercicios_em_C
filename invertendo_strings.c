#include <stdio.h>
#include <string.h>

int main(){

    char palavra[30] = "Linguagem C";
    char c;
    int i, tam = strlen(palavra);
    printf("a palavra é: %s\n", palavra);
    for(i = 0; i < tam/2; i++){
        c = palavra[i];
        palavra[i] = palavra[tam - 1 - i];
        palavra[tam - 1 - i] = c;
    }
    printf("a palavra invertida é: %s\n", palavra);
    return 0;
}

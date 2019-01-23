#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco{
    char rua[50];
    int numero;
};

/* Struct podem ser aninhadas dentro de outras.
 * Isso facilita as nossas declarações, podendo reaproveitar
 * as structs já declaradas.*/
struct pessoa{
    char nome[50];
    int idade;
    struct endereco ender;
};

int main(){

    /* Com as structs aninhadas, podemos atribuir valores para ela
     * colando pontos para cada nível de declaração.*/
    struct pessoa pipi; 
    strcpy(pipi.nome, "fellipe");
    pipi.idade = 29;
    pipi.ender.numero = 710;// Dois pontos para descermos a cada nível de struct.
    printf("nome: %s, idade: %d, residencia N°: %d\n", pipi.nome, pipi.idade, pipi.ender.numero);
    return 0;
}

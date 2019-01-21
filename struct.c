#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Na struct é onde definimos um aglomerado de variáveis
 * na sua declaração usamos chaves para definir um escopo e logo depois
 * colocamos ponto e vírgula, como se estivessemos declarando uma variável
 * mesmo.
 * Vale dizer que em structs diferentes, podemos ter variáveis com mesmo nome,
 * exatamente, por estarem em escopos diferentes.*/
struct pessoa{
    char nome[50];
    int idade;
};

struct animal{
    char nome[50];
    int idade;
};

int main(){

    struct pessoa pipi;
    struct animal bingo, pingo;
    strcpy(pipi.nome, "fellipe");
    pipi.idade = 29;
    strcpy(bingo.nome, "bingo");
    bingo.idade = 12;
    strcpy(pingo.nome, "pingo");
    pingo.idade = 4;
    printf("dados da struct pessoa - nome: %s, idade: %d\n", pipi.nome, pipi.idade);
    printf("dados da struct animal - nome: %s, idade: %d\n", bingo.nome, bingo.idade);
    printf("dados da struct animal - nome: %s, idade: %d\n", pingo.nome, pingo.idade);
    return 0;
}

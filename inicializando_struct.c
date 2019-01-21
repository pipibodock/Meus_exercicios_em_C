#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{

    char nome[50], rua[50];
    int idade, numero;
};

int main(){

    /* Além das atribuições convencionais, onde passamos as strings
     * pelo copy da lib string, e atribuições do tipo inteiro, 
     * para iniciarmos uma struct, podemos inicia-la como se fosse um
     * array, fazendo as atribuições entre chaves. 
     * Vale ressaltar que precisamos seguir a mesma ordem da declaração, 
     * isso significa que não conseguimos "saltar" valores, o que conseguimos fazer
     * é deixar o último valor sem atribuição, nesse caso será colocado um valor 
     * default, dependendo do tipo da sua variável, dentro da struct.*/
    struct pessoa pipi = {"pipi", "rua 1", 29, 1};

    struct pessoa bingo = {"bingo", "rua 1", 29};
    /* Outra declaração que não é muito convencional, mas é possível fazer
     * com as structs, é atribuição direta de todos os valores. 
     * Mas vale dizer que isso só é possível para as mesmas structs. 
     * Mesmo que as struct diferentes, tenham os mesmos campos, com os mesmos nomes,
     * não é possível fazer atribuições como o exemplo abaixo, porque são diferentes.*/
    struct pessoa coisa;
    coisa = pipi;
    printf("valores de coisa: %s %s\n%d %d\n", coisa.nome, coisa.rua, coisa.idade, coisa.numero);

    return 0;
}

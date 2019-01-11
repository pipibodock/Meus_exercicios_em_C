#include <stdio.h>
#include <stdlib.h>

/*Strings: um array de caracteres que permite armazenar uma sequência de caracteres
 *adjacentes na memória.*/
int main(){

    //Exemplo de declaração
    //Assim como qualquer array, declaramos também o seu tamanho.
    char palavra[30];
    printf("Digite uma palavra:\n");
    scanf("%s", palavra);
    //Podemos inserir palavras com o scanf que ja conhecemos, vale ressaltar que eu
    //não coloco o índice onde será inserido. Pois a leitura será de toda a palavra.
    printf("a palavra digitada é: %s\n", palavra);
    //Declaração de string, pode ser feita de 2 maneiras:
    //Desta primeira maneira é interessante ressaltar que não podemos esquecer
    //do \0 no final da declaração. Pq?
    //Como declaramos o espaço do array como 30, precisamos também indicar
    //onde é o final da string, caso contrário teremos o que chamamos de "lixo"
    //onde capturaremos elementos que são guardados nesse espaço não ultilizado.
    char palavra2[30] = {'A', 'l', 'g', 'u', 'e', 'm', '\0'};
    printf("a palavra digitada é: %s\n", palavra2);
    palavra2[2] = '\0';
    printf("a palavra digitada é: %s\n", palavra2);
    //Podemos declarar uma string usando aspas duplas, o que dispensa o uso
    //do contra barra zero.
    char palavra3[30] = "Aspas Duplas";
    printf("a palavra digitada é: %s\n", palavra3);
    return 0;
}

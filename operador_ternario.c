#include <stdio.h>

int main(){

    int x, y, z;
    printf("digite um valor inteiro:\n");
    scanf("%d", &x);
    printf("digite um segundo valor inteiro\n");
    scanf("%d", &y);

    /* A interrogação é o que chamamos de operador ternário.
     * Usamos um operador ternário para realizarmos ações que
     * representam um if-else simples. Isso quer dizer que 
     * após a interrogação colocamos o primeiro parâmetro, se 
     * ele for verdadeiro a ação será executada, caso contrario,
     * o segundo parâmetro sera executado.
     *
     * Exemplo de ternário em uma atribuição:*/
    z = x > y ? x : y;
    printf("o maior número é: %d\n", z);

    /* Exemplo de uma simples ação de printar, sem atribuir a nenhuma variável,
     * dependendo da condição que colocamos para ser verificada.*/
    (x > y) ? printf("X é o maior: %d\n", x)
            : printf("Y é o maior: %d\n", y);
    return 0;
}

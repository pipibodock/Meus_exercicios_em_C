#include <stdio.h>
/* Existem formas diferentes para facilitar o momento de preencher um array.
 * Porém essas facilidades são possíveis somente no momento da declaração.*/
int main(){

    /*Primeira forma de se preencher um array*/
    float primeira[3] = {1, 2, 3.5};
    /*Segunda forma de se preencher um array
     *Nesse momento preenchemos a matriz, e o preenchimento
     é feito da esquerda para a direita.*/
    int segunda[2][3] = {1, 2, 3, 4, 5, 6};
    /*Uma segunda opção de preencher uma matriz é dividir no número de linhas..
     *Pessoalmente, preferi essa segunda opção.*/
    int terceira[2][3] = {{1, 2, 3}, {4, 5, 6}};
    /*Uma curiosidade é que existe a possibilidade de preenchermos um array
     *sem declararmos seu tamanho. Ao preencher com os valores, se "entende" o
     seu tamanho. Um cuidado nessas ações é se perder o tamanho do seu array, apesar
     de haver maneiras diferentes de descobrir o seu tamanho.*/
    int quarta[] = {1, 2, 3, 4, 5};
    /*Podemos preencher até mesmo matrizes sem declarar o seu tamanho. Porém, só
     *é possível sem o primerio índice, os outros devem ser declarados.*/
    int quinta[][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    return 0;
}

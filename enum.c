#include <stdio.h>
#include <string.h>

enum semana{segunda, terca, quarta};
enum dias{dia=1, dia2, dia3=7, dia4};
/* Enum no C, é uma forma de declarar constantes que seguem uma ordem crescente de inteiros,
 * ou equivalente a inteiros.
 * Por exemplo, podemos declarar uma constante com valores de caracteres, pois equivalem
 * a inteiros na tabela ASC.
 * Podemos declarar um valor para as constantes, porem a proima que não tiver
 * sido declarada, seguirá uma sequência lógica, crescente.*/

int main(){

    enum semana dia = segunda;
    printf("o valor de segunda é: %d\n", dia);
    enum dias valor = dia2;
    enum dias valor2 = dia4;
    printf("os valores são terça: %d e quinta: %d\n", valor, valor2);
    return 0;
}

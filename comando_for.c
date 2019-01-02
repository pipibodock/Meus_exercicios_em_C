#include <stdio.h>
/* O for usado na linguegem C, é bem diferente do que estamos acostumados
 * a usar em Python. A primeira diferença é que ele não é executado sobre
 * um interável. Aliás, não temos iteraveis no C.
 * O C, vai parecer muito mais com o comando while, isso porque ele recebe
 * consições para ser executado, e faz incrementos enquanto essa condição
 * for verdadeira.*/
int main(){

    int a, b;
    for(a = 0, b = 12; a < b; a++, b--){
        printf("o valor de a é: %d e b é: %d\n", a, b);
    }
    return 0;
}

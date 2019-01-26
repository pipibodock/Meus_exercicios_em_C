#include <stdio.h>
#include <string.h>

/* Definir parâmetros que são passados e conhecidos como
 * "Passagem por valor" signifca que estamos alterando
 * o valor copiado para o parâmetro, e todas as alterações
 * que são feitas, estaram no escolo local da função.*/
void soma_por_valor(int n){

    n = n + 1;
    return;
}
/* Uma chamada de função que recebe seus parâmetros por "Referencia"
 * significa que estamos passando seu endereço de memória, para que
 * o valor possa ser alterado diretamente aonde está guardado.
 * As declarações por referencia são um pouco diferentes, pois
 * seus parâmetros devem receber um asterisco na frente e ser manipulado
 * assim a todo momento.*/
void soma_por_referencia(int *n){

    *n = *n + 1;
    return;
}

int main(){

    int x = 10;
    printf("valor de x: %d\n", x);
    soma_por_valor(x);
    printf("valor de x depois da chamada de função por valor %d\n", x);

    int y = 5;
    printf("valor de y: %d\n", y);
    // No momento de se usar uma função que é declarada por referencia,
    // usamos o & comercial junto, isso significa que estamos passando
    // o endereço de memória de Y.
    // O que acontece é o mesmo que acontece com a função scanf.
    soma_por_referencia(&y);
    printf("valor de y depois da chamada de função por referencia %d\n", y);
    return 0;
}

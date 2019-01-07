#include <stdio.h>
#define N 7
int main(){

    int notas[N], resultado[N], valor, valor_inicial, i;
    scanf("%d", &valor_inicial);
    notas[0] = 100;
    notas[1] = 50;
    notas[2] = 20;
    notas[3] = 10;
    notas[4] = 5;
    notas[5] = 2;
    notas[6] = 1;
    valor = valor_inicial;
    for(i=0; i<N; i++){
        resultado[i] = valor/notas[i];
        valor = valor - (valor/notas[i]) * notas[i];
    }
    printf("%d\n", valor_inicial);
    for(i=0; i<N; i++){
        printf("%d nota(s) de R$ %d,00\n", resultado[i], notas[i]);
    }
    return 0;
}

#include <stdio.h>

int main(){

    int horas, minutos, segundos, valor;
    scanf("%d", &valor);
    horas = (valor / 60) / 60;
    minutos = (valor / 60) % 60;
    segundos = valor % 60;
    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}

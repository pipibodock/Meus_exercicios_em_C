#include <stdio.h>

int main(){
    double A, B, MEDIA;
    printf("insira dois números para calcularmos a média ponderada:\n");
    scanf("%lf %lf", &A, &B);
    /* 
     Consideramos os pesos da media ponderada igual
     3.5 para A e 7.5 para B
    */
    MEDIA = (A * 3.5 + B * 7.5) / (3.5 + 7.5);
    printf("A média ponderada é igual a: %0.5lf\n", MEDIA);
    return 0;
}

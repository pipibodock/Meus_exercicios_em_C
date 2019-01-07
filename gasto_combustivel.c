#include <stdio.h>
 
int main() {
    const int consumo = 12;
    float tempo, velocidade; 
    float litros_necessarios;
    scanf("%f %f", &tempo, &velocidade);
    litros_necessarios = (velocidade/consumo) * tempo;
    printf("%0.3f\n", litros_necessarios);
    return 0;
}

#include <stdio.h>

int main(){
    const float n = 3.14159;
    double raio, area;
    scanf("%lf", &raio);
    area = n * (raio * raio);
    printf("a area do circulo é: %0.4lf\n", area);
    return 0;

}

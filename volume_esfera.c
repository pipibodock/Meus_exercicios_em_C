#include <stdio.h>

int main(){
    const double pi = 3.14159;
    double R, volume;
    scanf("%lf", &R);
    volume = (4.0/3.0) * pi * (R * R * R);
    printf("VOLUME = %0.3lf\n", volume);
    return 0;
}

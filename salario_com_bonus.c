#include <stdio.h>

int main(){
    char nome;
    double salario, vendas, total;
    scanf("%s %lf %lf", &nome, &salario, &vendas);
    total = salario + (vendas / 100) * 15;
    printf("Total é: %0.2lf\n", total);
    return 0;
}

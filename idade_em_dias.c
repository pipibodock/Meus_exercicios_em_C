#include <stdio.h>

int main(){

    int idade, ano = 0, mes = 0, dia = 0;
    scanf("%d", &idade);
    while(idade >= 365){
        idade = idade - 365;
        ano++;
    }
    while(idade >= 30){
        idade = idade - 30;
        mes++;
    }
    dia = idade;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
    return 0;
}

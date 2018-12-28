#include <stdio.h>

int main(){

    int x;
    printf("Digite um número inteiro:\n");
    scanf("%d", &x);
    if(x > 0){

        if(x % 2 == 0){
            printf("O número é maior que 0 e é par\n");
        }else{
            printf("O número é impar.\n");
        }

    }else{

        printf("O número é menor que 0\n");

    }
    return 0;
}

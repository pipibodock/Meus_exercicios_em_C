#include <stdio.h>
#include <string.h>

int fatorial(int n){

    int i, f = 1;
    for(i = 1; i <= n; i++){
        f = f * i;
        printf("%d\n", f);
    }
    return f;
}

int menu(){

    int i;
    do{
        printf("Escolha uma opção:\n");
        printf("opção 1 - calcular fatoria de 5\n");
        printf("opção 2 - calcular fatoria de 10\n");
        printf("opção 3 - calcular fatoria de 15\n");
        scanf("%d", &i);

    }while((i < 1)|(i > 3));
    return i;
}

int main(){

    int a;
    a = menu();
    if(a == 1){
        printf("fatorial de 5 é: %d\n", fatorial(5));
    }
    if(a == 2){
        printf("fatorial de 5 é: %d\n", fatorial(10));
    }
    if(a == 3){
        printf("fatorial de 5 é: %d\n", fatorial(15));
    }
    return 0;
}

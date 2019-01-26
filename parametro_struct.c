#include <stdio.h>
#include <stdlib.h>

struct ponto{
    int x, y;
};
struct pessoa{
    int idade, senha;
};
//Faremos a passada dos pontos de uma struct como parâmetro de uma função.
//isso pode acontecer, tanto por valor quanto por referencia;
void soma_imprime(int *n){
    *n = *n + 1;
    printf("valor de n é: %d\n", *n);
}

void soma_imprime_valor(int n){
    n = n + 1;
    printf("valor de n por valor é: %d\n", n);
}
void atribui(struct pessoa *p){
    //podemos ter 2 tipos de notações de uma struct inteira,
    //por referencia, usando parêntese:
    //(*p).x
    //(*p).y
    p -> idade = 10;
    p -> senha = 12;
};
int main(){

    // Como podemos perceber, passar pontos de uma struct
    // segre a regra geral da passada de parâmetros.
    struct ponto p = {1, 2};
    soma_imprime(&p.y);
    soma_imprime(&p.x);
    struct ponto pvalor = {10, 12};
    soma_imprime_valor(pvalor.y);
    soma_imprime_valor(pvalor.x);
//-------------------------------------------------
    struct pessoa pipi;
    atribui(&pipi);
    printf("valores da struct: %d %d\n", pipi.idade, pipi.senha);
    
    return 0;
}
// -------------------------------------

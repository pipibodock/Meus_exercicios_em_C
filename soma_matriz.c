#include <stdio.h>

int main(){

    /*Foma de somarmos um array.*/
    int primeira[5] = {1, 2, 3, 4, 5};
    int i, j, soma = 0, soma_matriz=0;
    for(i = 0; i <  5; i++){
        soma = soma + primeira[i];
    }
    printf("A soma do array é %d\n", soma);
    /*Podemos usar a mesma estrtégia para somarmos uma matriz.*/
    int segunda[2][4] = {{1, 2, 3, 4}, {4, 3, 2, 1}};
    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            soma_matriz = soma_matriz + segunda[i][j];
        }
    }
    printf("A soma da matriz é %d\n", soma_matriz);
    return 0;
}

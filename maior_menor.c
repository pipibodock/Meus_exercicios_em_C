#include <stdio.h>

int main(){

    int vetor[5] = {10, 6, 9, 45, 7};
    int i, j, maior_do_vetor = vetor[0], menor_do_vetor = vetor[0];
    /*não usamos o valor 0 para o i, pq já atribuimos o primeiro indice para a variável
     * maior e menor. Sendo assim, não precisa comparar o primeiro com ele mesmo.*/
    for(i = 1; i < 5; i++){
        if(vetor[i] > maior_do_vetor){
            maior_do_vetor = vetor[i];
        }
        if(vetor[i] < menor_do_vetor){
            menor_do_vetor = vetor[i];
        }
    }
    printf("O maior valor do vetor é: %d, o menor valor do vetor é: %d\n", maior_do_vetor, menor_do_vetor);
    int matriz[2][4] = {{2, 4, 10}, {20, 12, 1}};
    int maior_da_matriz = matriz[0][0], menor_da_matriz = matriz[0][0];
    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            if(matriz[i][j] > maior_da_matriz){
                maior_da_matriz = matriz[i][j];
            }
            if(matriz[i][j] < menor_da_matriz){
                menor_da_matriz = matriz[i][j];
            }
        }
    }
    printf("O maior valor da matriz é: %d, o menor valor da matriz é: %d\n", maior_da_matriz, menor_da_matriz);
    return 0;
}

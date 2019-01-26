#include <stdio.h>
#include <string.h>

// Uma pequena função que imprime os elementos de um array.
// O primeiro detalhe que vamos colocar aqui é que
// todo array sempre será passado para uma função por referência. Nunca por valor.
//
// Segundo detalhe que vamos perceber, é que estamos passando parâmetros
// de maneiras diferentes, um por referencia e outro por valor. Isso pode acontecer.
//
// Outro ponto que vale ressaltar é que, o segundo valor inteiro passado por valor
// será sempre o tamanho do nosso array, ou a quantidade de elementos que queremos
// modificar. Pois quando passamos o array por referencia, ele pega o endereço
// do primeiro elemento "[0]" como referencia e precisa saber quantos "passos"
// ele deve andar.
//
// Mais um ponto para dizer é que, vetores podem ser passados como parâmetro não
// só com o asterisco, pode ser passado com colchetes também. Ele foge a regra em
// que todos os elementos passados por referencia devem ser manipulados todo o tempo
// com o asterisco. Isso porque, identificamos um vetor pelo nome, e não pelo seu
// endereço.
void imprime(int *v, int n){

    int i;
    for(i = 0; i < n; i++){
        printf("%d\n", v[i]);
    }
    printf("------\n");
}

// A declaração de parâemtros para matriz, só pode ser feita dessa forma.
// Na declaração o número de linhas não precisa ser passado dentro dos
// colchetes, pois estará declarado no valor inteiro. Porem todas as
// outras dimensoes da matriz, precisa aparecer.
void imprime_matriz(int v[][2], int n){

    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < 2; j++){
            printf("%d", v[i][j]);
        }
        printf("\n");
    }
}

int main(){

    // No momento de passarmos array, matriz e etc.. para a função
    // também não usamos o &, isso porque o array é referenciado
    // pelo nome.
    int vetor[5] = {1, 2, 3, 4, 5};
    imprime(vetor, 5);
    int matriz[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    imprime_matriz(matriz, 3);
    return 0;
}

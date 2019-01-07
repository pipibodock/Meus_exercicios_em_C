#include <stdio.h>
#define N 5

int main(){

    float lista[N], media = 0.0;
    int i;
    for(i = 0; i < N; i++){
        printf("Digite a nota do aluno:");
        scanf("%f", &lista[i]);
        media = media + lista[i];
    }

    media = media / N;
    for(i = 0; i < N; i++){
        if(lista[i] > media)
            printf("aluno %d: média: %0.2f\n", i, lista[i]);
    }
    return 0;
}

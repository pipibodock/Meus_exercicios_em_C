#include <stdio.h>

int main(){

    int matriz[2][3], i, j;
    for(i = 0; i < 2; i++){
        for(j=0; j < 3; j++){
            printf("preencha os valores para a matriz:[%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

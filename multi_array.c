#include <stdio.h>

/*No exercício anterior aprendemos sobre matrizes. Que são arrays com 2 dimensões.
 * Porem, nesse exercício, vemos que arrays podem contem multi dimensões.
 * Significa que aqui usamos 3 dimensões para exemplificar, mas poderíamos
 * ter várias. O alerta que fica, é que quanto mais dimensão temos, mais
 * memória consumimos. Afinal, somente nesse exemplo temos 5**3 variáveis.*/
int main(){

    char coisa[5][5][5];
    int i, j, k;
    for(i = 0; i < 5; i++){
        for(j = 0; j <  5; j++){
            for(k = 0; k < 5; k++){
                coisa[i][j][k] = 'A';
            }
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j <  5; j++){
            for(k = 0; k < 5; k++){
                printf("%c", coisa[i][j][k]);
            }
        }
        printf("\n");
    }
    return 0;
}

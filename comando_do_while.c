# include <stdio.h>
/* O comando do while possui uma estrutura bem parecida com o while simples.
 * Tanto que seu nome ainda persiste o while. A diferença é que independente da
 * consição que estamos verificando, se for falsa ou verdadeira, uma saída sempre
 * será executada.*/

int main(){

    int a, b;
    printf("digite dois valores inteiros:\n");
    scanf("%d %d", &a, &b);
    /* Nesse ponto, independente da condição, a ação será tomada, 
     * e logo depois a condição será verificada.*/
    do{
        printf("o valor de a é: %d e b é: %d\n", a, b);
        a++;
    }while(a < b && a > 0);
    return 0;
}

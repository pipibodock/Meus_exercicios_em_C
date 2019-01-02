# include <stdio.h>
/* O comando while da linguegem C, assim como na linguagem Python, 
 * é executado enquando o estado da nossa condição continue True,
 * no momento que tivermos o inverso da condição, teremos a interrupção.*/
int main(){

    int a, b;
    printf("Digite dois valores inteiros:\n");
    scanf("%d %d", &a, &b);
    while (a < b && a > 0){
        a++;
        printf("o valor de a é: %d\n", a);
    }
    return 0;
}

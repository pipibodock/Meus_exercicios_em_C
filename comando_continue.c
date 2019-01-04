#include <stdio.h>

int main(){

    int a, b;
    printf("Digite dois valores para A e B:\n");
    scanf("%i %i", &a, &b);
    while(a < b){
        a++;
        if(a % 2 == 0){
            continue;
        }
        printf("%d\n", a);
    }
    return 0;
}

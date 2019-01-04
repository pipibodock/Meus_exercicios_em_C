#include <stdio.h>

int main(){

    int a, b;
    printf("Digite dois valores para A e B:\n");
    scanf("%d %d", &a, &b);
    if(a < b){
        for(; a<=b; a++){
            if(a == b/2){
                break;
            }
            printf("A: %d\nB: %d\n", a, b);
        }
    }else if(b < a){
        for(; b<=a; b++){
            if(b == a/2){
                break;
            }
            printf("A: %d\nB: %d\n", a, b);
        }
    }else{
        printf("a == b");
    }
    return 0;
}

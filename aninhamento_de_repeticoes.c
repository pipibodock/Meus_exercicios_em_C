#include <stdio.h>

int main(){

    int i, j;
    for(i=10; i>0; i--){
        for(j=10; j>0; j--){
            if(i == j)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}

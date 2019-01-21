#include <stdio.h>
#include <string.h>

int main(){

    char palavra1[20] = "linguagem c";
    char vogais[11] = "aeiouAEIOU";
    int i, j, total = 0;
    int tam1 = strlen(palavra1);
    int tamvog = strlen(vogais);
    for(i = 0; i < tam1; i++){
        for(j = 0; j < tamvog; j++){
            if(palavra1[i] == vogais[j]){
                total++;
                break;
            }
        }
    }
    printf("O número de vogal na palavra 'linguagem C' é igual a: %d\n", total);
    return 0;
}

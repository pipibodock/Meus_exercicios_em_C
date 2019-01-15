#include <stdio.h>
#include <string.h>

int main(){

    //Copiando uma string "na mão".
    char palavra[20] = "Hello world";
    char palavra2[20];
    int i;
    for(i = 0; palavra[i] != '\0'; i++){
        palavra2[i] = palavra[i];
    }
    palavra2[i] = '\0';
    printf("palavra 1: %s, palavra 2: %s\n", palavra, palavra2);

    /* Para facilitar um pouco as coisas, temos então algumas funções em C, que nos ajudam
     * a manipular strings. Para isso, precisamos importar a biblioteca STRING.H*/

    //strlen() uma função para saber o tamanho da string. Lembrando que não é
    //o tamanho que foi declarado, e sim o número de caracteres.
    int tamanho = strlen(palavra);
    printf("Usando strlen, o tamanho da palavra é: %d\n", tamanho);

    //Usando outra funao da lib string, temos o strcpy(), que faz atribuição
    //da palavra inteira, em outra variável. Facilitando a cópia da string que
    //fizemos na mão, logo acima.
    char palavra3[20];
    strcpy(palavra3, palavra);
    printf("usando a função strcpy(), a palavra 3 é: %s\n", palavra3);

    //strcat usado para concatenar duas strings.
    //vale dizer que ela recebe dois parametros, e eles funcionam assim:
    //o segundo parametro é concatenado no fim do primeiro.
    //então, nesse exemplo a baixo, na variável "bom", teremos a palavra, bom dia!
    char bom[10] = "bom ";
    char dia[10] = "dia";
    strcat(bom, dia);
    printf("usando a função strcat(), a palavra é: %s\n", bom);

    //Outra função que temos é a strcmp(), que faz comparação.
    //Se as palavras comparadas forem iguais, ele retorna um 0.
    //Lembrando que o C, é case sensitive, então terá diferença
    //entre maiúsculo e minúsculo.
    char nome[30] = "linguagem c";
    char nome2[30] = "LINGUAGEM C";
    if(strcmp(nome, nome2) == 0){
        printf("usando a função strcmp as strings comparadas são iguais\n");
    }else{
        printf("usando a função strcmp as strings são diferentes\n");
    }

    return 0;
}

#include <stdio.h>

int main(){
    
    int x = 10, y = 12;
    x++;
    ++y;
    printf("%d %d\n", x, y);
    /* Nos exemplos acima o que nós estamos fazendo é equivalente a:
     * x = x + 1
     * y = y + 1
     * Poderíamos ter feito com o sinal de menos que também funcionaria.
     * a grande questão aqui é que podemos colocar os sinais tanto na frente quanto atrás.*/
    x = y++;
    printf("%d %d\n", x, y);
    /* O cuidado que devemos ter é no momento de atribuir esses valores a outra variável.
     * No exemplo acima o que nós estamos fazendo é equivalente a:
     * x = y
     * y = y + 1
     * Ou seja, o que estamos fazendo é um pós incremento, incrementando após a nova atribuição.*/
    x = ++y;
    /* Já no exemplo acima, temos o que chamamos de pré incremento. isso é equivalente a:
     * y = y + 1
     * x = y
     * o incremento do valor é feito antes da atribuição.*/
    printf("%d %d\n", x, y);
    return 0;

}

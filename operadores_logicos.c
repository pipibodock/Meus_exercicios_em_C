#include <stdio.h>

int main(){
    
    int z, x = 10, y = 10;
    /* operadore lógicos em c:
     * && é equivalente ou AND
     * || é equivalente ao OR
     * ! é equivalente ao NOT*/
    z = (x == 0) && (y == 0);
    printf("aqui deve ser 0: %d\n", z);

    z = (x == y) && (y == x);
    printf("aqui deve ser 1: %d\n", z);

    z = (x == 0) || (y == x);
    printf("aqui deve ser 1: %d\n", z);

    z = (x == y) || (y == 0);
    printf("aqui deve ser 1: %d\n", z);

    z = (x == 0) || (y == 0);
    printf("aqui deve ser 0: %d\n", z);

    z = !(x == y) || (y == 0);
    printf("aqui deve ser 0: %d\n", z);

    z = !(x == y) && (y == x);
    printf("aqui deve ser 0: %d\n", z);
    return 0;
}

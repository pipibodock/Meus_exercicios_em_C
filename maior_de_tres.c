#include<stdio.h>
int main(){
    int A, B, C, D, E, F;
    scanf("%d %d %d", &A, &B, &C);
    D = A > B ? A: B;
    E = B > C ? B: C;
    F = D > E ? D: E;
    printf("%d eh o maior\n", F);
    return 0;
}

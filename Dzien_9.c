#include <stdio.h>

void podziel(int x, int y, int *suma, int *roznica, int *iloczyn){
    *suma = x+y;
    *roznica = x-y;
    *iloczyn = x*y;
}

int main(){
    int a =17;
    ustawNaZero(&a);

    return 0;
}
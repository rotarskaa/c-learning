#include <stdio.h>

void zwieksz(int *x, int ile){
    *x += ile;
}

int main(){
    int a=10;
    
    zwieksz(&a, 5);

    return 0;
}
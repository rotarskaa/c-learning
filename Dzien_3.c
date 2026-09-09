#include <stdio.h>

int main(){

    int n;
    int suma=0;

    printf("Podaj n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if (i%3==0 || i%5==0){
            suma+=i;
        }
    }

    printf("Suma: %d", suma);
    

    return 0;
}
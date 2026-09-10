#include <stdio.h>

int liczPodzielne(int n, int dzielnik){
    int licznik=0;

    for(int i=1; i<=n;i++){
        if(i%dzielnik==0){
            licznik+=1;
        }
    }

    return licznik;
}

int main(){
    int x=10;
    int y=3;

    int wynik = liczPodzielne(x,y);

    printf("%d", wynik);

    return 0;
}
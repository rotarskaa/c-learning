#include <stdio.h>

int sumaTablicy(int *tab, int n){
    int suma=0;
    int liczba;
    for(int i = 0; i<n; i++){
        liczba = *(tab+i);
        suma += liczba;
    }
    return suma;
}

int main(){
    int tab[5] = {2,4,6,8,10};
    int *p = tab;

    int wynik = sumaTablicy(tab, 5);

    return 0;
}
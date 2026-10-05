#include <stdio.h>

void najm_najw_parz(int n, int tab[], int *najm, int *najw, int *licznik){
    *najm=tab[0];
    *najw=tab[0];
    *licznik=0;
    
    for (int i=0; i<n;i++){
        if(tab[i]<*najm){
            *najm=tab[i];
        }
        if(tab[i]>*najw){
            *najw=tab[i];
        }
        if(tab[i]%2==0){
            (*licznik)++;
        }
    }
}

int main(){
    int tablica[8];
    int najm;
    int najw;
    int licznik;

    for(int i=0; i<8;i++){
        printf("Podaj liczbe: ");
        scanf("%d", &tablica[i]);
    }

    najm_najw_parz(8, tablica, &najm, &najw, &licznik);

    return 0;
}
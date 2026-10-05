#include <stdio.h>
#include <stdlib.h>

void suma(int n, int tab[], int *suma, int *najm, int *ilosc){
    for(int i=0;i<n;i++){
        *suma+=tab[i];

        if(tab[i]<*najm){
            *najm=tab[i];
        }

        if(tab[i]<0){
            (*ilosc)++;
        }
    }
}

int main(){
    int n=10;
    if(n<=0){
        return 1;
    }
    int *tab = (int*)malloc(n*sizeof(int));

    if(tab==NULL){
        return 1;
    }

    for(int i=0;i<n;i++){
        printf("podaj liczbe: ");
        scanf("%d", &tab[i]);
    }

    int suma1=0;
    int najm1=tab[0];
    int ilosc1=0;

    suma(n, tab, &suma1, &najm1, &ilosc1);

    free(tab);

    return 0;
}
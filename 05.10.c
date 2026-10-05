#include <stdio.h>

void policz(const int tab[], int n, int *suma, int *najw){
    for(int i=0;i<n;i++){
        if(*najw<tab[i]){
            *najw=tab[i];
        }
        *suma += tab[i];
    }
}

int main(){
    int tab[10];
    for(int i=0;i<10;i++){
        scanf("%d", &tab[i]);
    }
    int najw=tab[0];
    int suma = 0;
    policz(tab, 10, &suma, &najw);
    return 0;
}
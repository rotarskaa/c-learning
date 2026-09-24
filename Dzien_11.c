#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    printf("Podaj n: ");
    scanf("%d", &n);

    if (n<=0){
        return 1;
    }
    int *tab = malloc(n * sizeof(int));

    if(tab == NULL){
        return 1;
    }

    int liczba;
    int suma=0;

    for(int i=0 ; i<n; i++){
        printf("Podaj liczbe: ");
        scanf("%d", &liczba);
        *(tab+i) = liczba;
        suma += liczba;
    }

    int max = tab[0];

    for(int i=1 ;i<n; i++){
        if (*(tab+i) > max){
            max = *(tab+i);
        }
    }

    double srednia = (double)suma/n;

    free(tab);
    tab=NULL;


    return 0;
}
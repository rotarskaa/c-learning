#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Podaj n: ");
    scanf("%d", &n);

    int *tab = (int*)malloc(n*sizeof(int));

    if(tab==NULL){
        return 1;
    }

    for(int i=0; i<n;i++){
        printf("Podaj liczbe: ");
        scanf("%d", &tab[i]);
    }
    int suma=0;
    int najw=0;
    double srednia=0.0;

    for(int j=0; j<n;j++){
        suma+=tab[j];
        if(tab[j]>najw){
            najw=tab[j];
        }
    }

    if(najw==0){
        printf("nie ma dodatniej\n");
    }

    srednia = (double)suma/n;

    printf("srednia %.2lf, suma %d, najw: %d", srednia, suma, najw);

    free(tab);

    return 0;
}
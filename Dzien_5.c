#include <stdio.h>

int main(void){
    int liczby[6];

    for(int i = 0; i < 6; i++){
        printf("Podaj liczbe: ");
        scanf("%d", &liczby[i]);
    }

    int max1;
    int max2;

    if(liczby[0] > liczby[1]){
        max1 = liczby[0];
        max2 = liczby[1];
    }
    else{
        max1 = liczby[1];
        max2 = liczby[0];
    }

    for(int i = 2; i < 6; i++){
        if(liczby[i] > max1){
            max2 = max1;
            max1 = liczby[i];
        }
        else if(liczby[i] > max2){
            max2 = liczby[i];
        }
    }

    printf("Druga najwieksza: %d\n", max2);

    return 0;
}
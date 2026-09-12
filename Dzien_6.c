#include <stdio.h>

int main(){
    char slowo[10];

    printf("podaj slowo: ");
    scanf("%9s", slowo);

    int dlugosc=0;
    for(int i=0; slowo[i]!='\0'; i++){
        dlugosc++;
    }

    for(int j=dlugosc-1; j>=0; j--){
        printf("%c", slowo[j]);
    }

    return 0;
}
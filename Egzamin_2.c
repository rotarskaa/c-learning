#include <stdio.h>


int main(){
    char slowo[30];

    printf("Podaj slowo: ");
    scanf("%29s", slowo);

    int dlugosc=0;
    int i=0;
    int licznik=0;

    while(slowo[i]!='\0'){
        dlugosc++;
        if(slowo[i]=='a'){
            licznik++;
        }
        i++;
    }

    for(int i=dlugosc-1; i>=0;i--){
        printf("%c", slowo[i]);
    }

    return 0;
}
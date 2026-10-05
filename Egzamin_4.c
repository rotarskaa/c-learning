#include <stdio.h>

struct Product {
    char nazwa[30];
    double cena;
    int ilosc_sztuk;
};

int znajd_produkt(struct Product produkt[]){
    int indeks=0;
    double wartosc=0.0;
    double suma=0.0;

    for(int i=0;i<5;i++){
        wartosc=produkt[i].cena * produkt[i].ilosc_sztuk;
        if(wartosc>suma){
            suma=wartosc;
            indeks=i;
        }
    }
    
    return indeks;
}

int main(){
    struct Product produkt[5];
    

    for(int i=0;i<5;i++){
        printf("podaj nazwe: ");
        scanf("%29s", produkt[i].nazwa);
        printf("podaj cene: ");
        scanf("%lf", &produkt[i].cena);
        printf("podaj ilosc: ");
        scanf("%d", &produkt[i].ilosc_sztuk);
    }

    int indeks = znajd_produkt(produkt);

    return 0;
}
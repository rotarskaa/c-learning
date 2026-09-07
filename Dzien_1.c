#include <stdio.h>

int main(void){
    int liczba_osob;
    double koszt_noclegu;
    double koszt_transportu;
    double koszt_jedzenia;

    printf("Podaj liczbe osob: ");
    scanf("%d", &liczba_osob);
    printf("Podaj koszt noclegu za osobe: ");
    scanf("%lf", &koszt_noclegu);
    printf("Podaj koszt transportu: ");
    scanf("%lf", &koszt_transportu);
    printf("Podaj koszt jedzenia za osobe: ");
    scanf("%lf", &koszt_jedzenia);

    double nocleg_lacznie = liczba_osob*koszt_noclegu;
    double jedzenie_lacznie = liczba_osob*koszt_jedzenia;
    double caly_wyjazd = nocleg_lacznie+jedzenie_lacznie+koszt_transportu;

    double koszt_na_osobe = caly_wyjazd/liczba_osob;

    return 0;
}
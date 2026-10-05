#include <stdio.h>

struct Pracownik{
    char imie[30];
    int liczba_godzin;
    double stawka;
};

int main(){
    struct Pracownik pracownik[3];

    for(int i=0;i<3;i++){
        printf("Podaj imie: ");
        scanf("%29s", pracownik[i].imie);
        printf("Podaj liczbe godzin: ");
        scanf("%d", &pracownik[i].liczba_godzin);
        printf("podaj stawke: ");
        scanf("%lf", &pracownik[i].stawka);
    }

    FILE *plik = fopen("egzamin5.txt", "w");

    for(int i=0;i<3;i++){
        fprintf(plik, "imie: %s\n", pracownik[i].imie);
        fprintf(plik, "liczba godzin: %d\n", pracownik[i].liczba_godzin);
        fprintf(plik, "stawka: %.2lf\n", pracownik[i].stawka);
    }

    fclose(plik);

    plik = fopen("egzamin5.txt", "r");

     for(int i=0;i<3;i++){
        fscanf(plik, "imie: %s\n", pracownik[i].imie);
        fscanf(plik, "liczba godzin: %d\n", &pracownik[i].liczba_godzin);
        fscanf(plik, "stawka: %lf\n", &pracownik[i].stawka);
    }

    fclose(plik);

    return 0;
}
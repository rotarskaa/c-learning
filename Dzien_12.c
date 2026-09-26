#include <stdio.h>

struct Student{
    char imie[30];
    int wiek;
    double cena;
};

int main(){
    struct Student uczen1 = {"Olek", 14, 80.0};

    FILE *plik = fopen("student.txt", "w");
    if (plik==NULL){
        return 1;
    }

    fprintf(plik, "%s %d %.2f\n",
        uczen1.imie, 
        uczen1.wiek, 
        uczen1.cena);
    fclose(plik);

    struct Student uczen2;

    FILE *plik2 = fopen("student.txt", "r");

    fscanf(plik2, "%29s %d %lf", 
        uczen2.imie, 
        &uczen2.wiek, 
        &uczen2.cena);
    fclose(plik2);

    return 0;
}
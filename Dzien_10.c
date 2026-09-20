#include <stdio.h>

struct Student{
    char imie[30];
    int wiek;
    int liczbaLekcji;
    double cenaLekcji;
};

int main(){
    struct Student uczniowie[3] = {{"ania",1,2,80.0}, {"asia",2,3,40.0}, {"kasia",3,4,50.0}};

    double suma=0.0;

    for(int i=0; i<3;i++){
        suma += uczniowie[i].liczbaLekcji * uczniowie[i].cenaLekcji;
    }

    

    return 0;
}
#include <stdio.h>
#include <string.h>

struct Student{
    char imie[30];
    int wiek;
    double cena;
    int liczba_lekcji;
};

void menu(){
    printf("\n1. Dodaj ucznia\n"
                "2. Wyswietl wszystkich uczniow\n"
                "3. Znajdz ucznia\n"
                "4. Usun ucznia\n"
                "5. Zarejestruj lekcje\n"
                "6. Oblicz przychod\n"
                "7. Zapisz dane do pliku\n"
                "8. Wyjdz\n\n");
}

void dodaj_ucznia(struct Student uczniowie[], int *ilosc_uczniow){
    if(*ilosc_uczniow<10){
                printf("Podaj imie: ");
                scanf("%29s", uczniowie[*ilosc_uczniow].imie);
                printf("Podaj wiek: ");
                scanf("%d", &uczniowie[*ilosc_uczniow].wiek);
                printf("Podaj cene jednej lekcji: ");
                scanf("%lf", &uczniowie[*ilosc_uczniow].cena);
                uczniowie[*ilosc_uczniow].liczba_lekcji=0;
                (*ilosc_uczniow)++;
            }
            else{
                printf("Nie mozna dodac kolejnego ucznia\n");
            }
}

void wyswietl_wszystkich(int *ilosc_uczniow, struct Student uczniowie[]){
    if(*ilosc_uczniow>0){
                for(int i=0 ;i<*ilosc_uczniow;i++){
                    printf("Imie: %s\n"
                            "wiek: %d\n"
                            "cena lekcji: %.2lf\n"
                            "liczba lekcji: %d\n\n",
                        uczniowie[i].imie, uczniowie[i].wiek,
                        uczniowie[i].cena, uczniowie[i].liczba_lekcji);
                }
            }
            else{
                printf("Nie ma zadnego ucznia\n");
            }
}

void znajdz_ucznia(struct Student uczniowie[], int *ilosc_uczniow){
    char imie3[30];
                printf("Podaj imie: ");
                scanf("%29s", imie3);
                int wynik=1;
                for(int i=0 ;i<*ilosc_uczniow;i++){
                    if(wynik==1){
                    if(strcmp(imie3, uczniowie[i].imie)==0){
                    wynik=0;
                    printf("Imie: %s\n"
                            "wiek: %d\n"
                            "cena lekcji: %.2lf\n"
                            "liczba lekcji: %d\n\n",
                        uczniowie[i].imie, uczniowie[i].wiek,
                        uczniowie[i].cena, uczniowie[i].liczba_lekcji);
                    break;}}
                }
                if(wynik!=0){
                    printf("nie znaleziono\n");
                }
}

void usun_ucznia(struct Student uczniowie[], int *ilosc_uczniow){
    char imie4[30];
                printf("Podaj imie: ");
                scanf("%29s", imie4);

                int wynik=1;
                int indeks=-1;
                for(int i=0 ;i<*ilosc_uczniow;i++){
                    if(wynik==1){
                    if(strcmp(imie4, uczniowie[i].imie)==0){
                    wynik=0;
                    indeks=i;
                break;}
                }
                
            }
            if(wynik!=0) printf("Nie znaleziono\n");
                if(indeks>=0){
                for(int j=indeks; j<*ilosc_uczniow-1;j++){
                    uczniowie[j] = uczniowie[j+1];
                    }
                    (*ilosc_uczniow)--;
                }}

void zarejestruj_lekcje(struct Student uczniowie[], int *ilosc_uczniow){
    char imie5[30];
                printf("Podaj imie: ");
                scanf("%29s", imie5);

                int wynik=1;
                for(int i=0 ;i<*ilosc_uczniow;i++){
                    if(wynik==1){
                    if(strcmp(imie5, uczniowie[i].imie)==0){
                    wynik=0;
                    uczniowie[i].liczba_lekcji++;
                    break;}
                }
                }
                if(wynik!=0){
                    printf("Nie znaleziono\n");
                }
}

void oblicz_przychod(struct Student uczniowie[], int *ilosc_uczniow){
    double calkowity_przychod=0.0;
                for(int i=0 ;i<*ilosc_uczniow;i++){
                    double przychod = uczniowie[i].liczba_lekcji * uczniowie[i].cena;
                    calkowity_przychod += przychod;
                    printf("Przychod za %s wynosi: %.2lf\n", uczniowie[i].imie, przychod);
                }
                printf("Przychod ze wszystkich lekcji: %.2lf\n", calkowity_przychod);
                
}

void zapisz_dane_do_pliku(struct Student uczniowie[], int *ilosc_uczniow){
    FILE * plik = fopen("projekt.txt", "w");
                if (plik==NULL){
                    printf("nie udalo sie utworzyc pliku\n");
                    return;
                }

                for(int i=0; i<*ilosc_uczniow;i++){
                fprintf(plik, "%s %d %.2lf %d\n", uczniowie[i].imie, uczniowie[i].wiek, uczniowie[i].cena, uczniowie[i].liczba_lekcji);
                }

                fclose(plik);
}

int main(){
    int wybor;
    struct Student uczniowie[10];
    int ilosc_uczniow=0;
    FILE *plik = fopen("projekt.txt", "r");
    if(plik!=NULL){

    while(ilosc_uczniow<10 && 
    fscanf(plik, "%29s %d %lf %d",
    uczniowie[ilosc_uczniow].imie,
&uczniowie[ilosc_uczniow].wiek, 
&uczniowie[ilosc_uczniow].cena,
&uczniowie[ilosc_uczniow].liczba_lekcji) == 4){
    ilosc_uczniow++;
}

fclose(plik);}

    do{
        menu();
        
        scanf("%d", &wybor);
        
        switch(wybor){
            case 1:
            dodaj_ucznia(uczniowie, &ilosc_uczniow);
            break;

            case 2:
            wyswietl_wszystkich(&ilosc_uczniow, uczniowie);
            break;

            case 3:
            znajdz_ucznia(uczniowie, &ilosc_uczniow);
                break;

            case 4:
            usun_ucznia(uczniowie,&ilosc_uczniow);
                break;

            case 5:
            zarejestruj_lekcje(uczniowie, &ilosc_uczniow);
                break;

            case 6:
            oblicz_przychod(uczniowie, &ilosc_uczniow);
            break;

            case 7:
            zapisz_dane_do_pliku(uczniowie, &ilosc_uczniow);
                break;
            case 8:
                break;
            
            default:
                printf("blad\n");
                break;
            }

    }
    while(wybor!=8);

    return 0;
}
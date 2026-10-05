#include <stdio.h>

void menu(){
    printf("1. Dodaj liczbę\n2. Wyświetl liczby\n3. Usuń pierwsze wystąpienie podanej liczby\n4. Wyświetl największą liczbę\n5. Zapisz liczby do pliku\n6. Wyjdź");

}

void dodaj(int tab[], int *ilosc){
    int wybor;
    if(*ilosc <10){
    (*ilosc)++;
    printf("podaj jaka liczbe chcesz dodac: ");
    scanf("%d", &wybor);
    tab[*ilosc-1]=wybor;}
    else{
        printf("Tablica jest pelna");
    }
}

void wyswietl(int tab[], int *ilosc){
    if(*ilosc >0){
    for(int i=0; i<*ilosc;i++){
        printf("%d ", tab[i]);
    }}
    else{
        printf("Brak liczb");
    }
}

void usun(int tab[], int *ilosc){
    int wybor;
    printf("podaj liczbe do usuniecia: ");
    scanf("%d", &wybor);
    int indeks;
    int znaleziono=0;

    for(int i=0;i<*ilosc;i++){
        if(znaleziono==0){
        if(tab[i]==wybor){
            znaleziono=1;
            indeks=i;
            for(int j=indeks;j<*ilosc-1;j++){
                tab[j]=tab[j+1];
            }
            (*ilosc)--;
            break;
        }
    }    }

    if(znaleziono==0){
        printf("nie ma takiej liczby w tablicy");
    }
}

void najwieksza(int tab[], int *ilosc){
    if(*ilosc > 0){
    int najw=tab[0];
    for(int i=0;i<*ilosc;i++){
        if(najw<tab[i]){
            najw=tab[i];
        }
    }}
    else{
        printf("pusta tablica");
    }

    printf("Najwieksza: %d", najw);
}

void zapisz(int tab[], int *ilosc){
    FILE *plik=fopen("egzamin_6.txt", "w");
    if(plik==NULL){
        printf("nie da sie otworzyc pliku");
        return;
    }

    for(int i=0;i<*ilosc;i++){
        fprintf(plik, "%d ", tab[i]);
    }

    fclose(plik);
}

int main(){
    int n;
    int tab[10];
    int ilosc=0;
    do{
        menu();
        printf("podaj liczbe: ");
        scanf("%d", &n);

        switch(n){
            case 1:
            dodaj(tab, &ilosc);
            break;

            case 2:
            wyswietl(tab, &ilosc);
            break;

            case 3:
            usun(tab, &ilosc);
            break;

            case 4:
            najwieksza(tab, &ilosc);
            break;

            case 5:
            zapisz(tab, &ilosc);
            break;

            case 6:
            break;

            default:
            break;

        }
    }
    while(n!=6);
}
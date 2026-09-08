#include <stdio.h>

int main(){
    int wiek;
    int wynik;

    printf("Podaj wiek: ");
    scanf("%d", &wiek);

    printf("Podaj wynik testu 0-100: ");
    scanf("%d", &wynik);

    if (wynik < 0 || wynik > 100){
        printf("niepoprawny wynik");
    }
    else if (wiek >=18 && wynik >=70){
        printf("przyjety");
    }
    else
    {
        printf("nieprzyjety");
    }

    return 0;
}
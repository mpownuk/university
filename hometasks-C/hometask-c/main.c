#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{

/*
    double x, n, result;
    char c;

    printf("== Program do obliczania pierwiastka podanego stopnia z liczby x ==\n");

    do {
        printf("wprowadz dowolny znak by rozpoczac, lub 'q', by zakończyć\n");
        scanf(" %c", &c);

        if (c != 'q' && c != 'Q') {
            printf("Wprowadz liczbe x: ");
            scanf("%lf", &x);
            printf("Wprowadz stopien pierwiastka: ");
            scanf("%lf", &n);
            result = pow(x, 1/n);
            printf("Pierwiastek stopnia %.2lf z liczby %.2lf to: %.2lf\n", n, x, result);
        }
    } while (c != 'q' && c != 'Q');
    */

     srand((unsigned)time(NULL));

    int randomNr = 1 + rand() % 100;
    int x, counter = 10;
    printf("== gra polegajaca na odgadnieciu losowej liczby z zakresu od 1 do 100 ==\n");
    printf("== posiadasz 10 szans by odgadanc liczbe ==\n");

    while (counter >= 1) {
        printf("wprowadz liczbe od 1 do 100:\n");
        scanf("%d", &x);

        if (x < 1 || x > 100) {
            printf("podana liczba jest nieprawidlowa\n");
        } else if (x == randomNr) {
            printf("gratulacje! udalo ci sie odgadnac liczbe\n");
            break;
        } else if (x < randomNr) {
            printf("zgadywana liczba jest Wieksza od podanej przez ciebie\n");
            counter--;
        } else {
            printf("zgadywana liczba jest Mniejsza od podanej przez ciebie\n");
            counter--;
        }

        printf("pozostalo ci %d szans.\n", counter);
    }

    printf("szukana liczba to: %d gra zakonczona\n", randomNr);


    return 0;
}

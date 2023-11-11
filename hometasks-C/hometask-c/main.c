#include <stdio.h>
#include <math.h>

int main()
{
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

    return 0;
}

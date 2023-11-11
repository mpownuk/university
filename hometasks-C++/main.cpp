#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
   /*
    double x, n, result;

    char c;
    cout << "== Program do obliczania pierwiastka podanego stopnia z liczby x ==" << endl;

    do {
        cout << "wprowadz dowolny znak by rozpoczac, lub 'q', by zakończyć" << endl;
        cin >> c;

        if (c != 'q' && c != 'Q') {
            cout << "Wprowadz liczbe x: ";
            cin >> x;
            cout << "Wprowadz stopien pierwiastka: ";
            cin >> n;
            result = pow(x, 1/n);
            cout << "Pierwiastek stopnia " << n << " z liczby " << x << " to: " << result << endl;
        }
    } while (c != 'q' && c != 'Q');
    */

    srand((unsigned) time(NULL));

        int randomNr = 1 + rand() % 100;
        int x, counter = 10;
        cout << "== gra polegajaca na odgadnieciu losowej liczby z zakresu od 1 do 100 ==" << endl;
        cout << "== posiadasz 10 szans by odgadanc liczbe ==" << endl;

        while ( counter >= 1){
        cout << "wprowadz liczbe od 1 do 100:" << endl;
            cin >> x;
            if (x < 1 || x > 100){
                cout << "podana liczba jest nieprawidłowa" << endl;
            } else if(x == randomNr){
                cout << "gratulacje! udalo ci sie odgadnac liczbe" << endl;
                break;
            } else if (x < randomNr){
                cout << "zgadywana liczba jest Wieksza od podanej przez ciebie" << endl;
                counter--;
            } else {
                cout << "zgadywana liczba jest Mniejsza od podanej przez ciebie" << endl;
                counter--;
            }
            cout << "pozostalo ci " << counter << " szans." << endl;

        }
        cout << "szukana liczba to: " << randomNr << " gra zakonczona" << endl;


    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
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

    return 0;
}

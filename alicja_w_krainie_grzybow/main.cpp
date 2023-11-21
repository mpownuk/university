#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int testTabLenght, i=0;
    cout << "Podaj liczbe testow: " << endl;
    cin >> testTabLenght;
    cin.ignore();
    int testTab[testTabLenght] = {};

    while(i<testTabLenght){
        string input;
        cout << "Podaj wartosci testu (dwie liczby calkowite oddzielone spacja): " << endl;
        getline(cin, input);
        cout << input << endl;
        i++;
    }

    return 0;
}

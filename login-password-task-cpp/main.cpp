 #include <iostream>
 #include <cstdlib>

using namespace std;

string login = "Adam", haslo = "password", podanyLogin, podaneHaslo;

void obliczPoleProstokata () {
    double a,b;
    cout << "== obliczanie pola prostokata ==";
    cout << "wprowadz dlugosc pierwszego boku: ";
    cin >> a;
    cout << "wprowadz dlugosc drugiego boku: ";
    cin >> b;

    cout << "pole prostokata o bokach " << a << " oraz " << b << " wynosi: " << a*b << "." << endl;
    return;
}

int main()
{
    int iloscBlednychDanychLogowania = 0;
    bool czyLogowanieMozliwe = true;

    while(czyLogowanieMozliwe){
        cout << "Podaj login:";
        cin >> podanyLogin;

        cout << "Podaj haslo:";
        cin >> podaneHaslo;

        if(podanyLogin == login && podaneHaslo == haslo){
            obliczPoleProstokata();
            break;
        } else {
            cout << " Podane login i / lub haslo sa nieprawidlowe!" << endl;
            iloscBlednychDanychLogowania++;
            if(iloscBlednychDanychLogowania >=3){
                cout << "przekroczono limit niepoprawnie wprowadzonych danych logowania!" << endl;
                czyLogowanieMozliwe = false;
                break;
            }
        }
    }

    return 0;
}

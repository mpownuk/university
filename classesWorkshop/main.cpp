#include <iostream>
#include <string>

using namespace std;


class Pracownik {
    private:
        string nazwisko;
        int wynagrodzenie;
    public:
        Pracownik(string nazw, int wynagr){
            nazwisko = nazw;
            wynagrodzenie= wynagr;
        }
        void wyswietlPracownika(){ // drugi sposob przeksztalcenia funkcji
            cout << "Pracownik: " << nazwisko << ", zarabia: " << wynagrodzenie << " PLN" << endl;
        };
        string pobierzNazwisko(){
            return nazwisko;
        }
        int pobierzWynagrodzenie(){
            return wynagrodzenie;
        }
};

void pokazPracownika(Pracownik pracownik); // pierwszy sposob przeksztalcenia funkcji

int main() {
    Pracownik Adam = Pracownik("Adam", 3400);
    Adam.wyswietlPracownika();

    Pracownik Nowak = Pracownik("Nowak", 6600);
    pokazPracownika(Nowak);

    return 0;
}

void pokazPracownika(Pracownik pracownik){
    cout << "Pracownik ma na nazwisko: " << pracownik.pobierzNazwisko() << ", zarabia: " << pracownik.pobierzWynagrodzenie() << " PLN." << endl;
}

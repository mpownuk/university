#include "manager.h"
#include <iostream>


using namespace std;

int main() {
    Manager manager("Kowalski", 5000.0);

    cout << "Pracownik: ";
    manager.wyswietlPracownika();

    manager.zmienDanePracownika("Nowak", 6000.0);
    cout << "Po zmianie danych: ";
    manager.wyswietlPracownika();

    Pracownik* nowyPracownik = manager.utworzNowegoPracownika();
    nowyPracownik->wyswietl();
    delete nowyPracownik;
    return 0;
}

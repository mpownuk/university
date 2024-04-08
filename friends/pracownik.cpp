#include "pracownik.h"
#include <iostream>

using namespace std;

Pracownik::Pracownik(string nazwisko, double pensja) : nazwisko(nazwisko), pensja(pensja) {}

void Pracownik::wyswietl(){
    cout << "Nazwisko: " << nazwisko << ", Pensja: " << pensja << endl;
}

void zmienWartosci(Pracownik& pracownik, string noweNazwisko, double nowaPensja) {
    pracownik.nazwisko = noweNazwisko;
    pracownik.pensja = nowaPensja;
}

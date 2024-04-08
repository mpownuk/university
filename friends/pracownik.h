#ifndef PRACOWNIK_H
#define PRACOWNIK_H

#include <string>

using namespace std;

class Pracownik {
private:
    string nazwisko;
    double pensja;

public:
    Pracownik(string nazwisko, double pensja);

    friend void zmienWartosci(Pracownik& pracownik, string noweNazwisko, double nowaPensja);

    void wyswietl();
};

#endif

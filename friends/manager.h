#ifndef MANAGER_H
#define MANAGER_H

#include "pracownik.h"

using namespace std;

class Manager {
private:
    Pracownik pracownik;

public:
    Manager(string nazwisko, double pensja);

    Pracownik* utworzNowegoPracownika();

    void wyswietlPracownika();
    void zmienDanePracownika(string noweNazwisko, double nowaPensja);
};

#endif

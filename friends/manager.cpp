#include "manager.h"

using namespace std;

Manager::Manager(string nazwisko, double pensja) : pracownik(nazwisko, pensja) {}

Pracownik* Manager::utworzNowegoPracownika(){
    return new Pracownik("", 0.0);
}

void Manager::wyswietlPracownika(){
    pracownik.wyswietl();
}

void Manager::zmienDanePracownika(string noweNazwisko, double nowaPensja) {
    zmienWartosci(pracownik, noweNazwisko, nowaPensja);
}

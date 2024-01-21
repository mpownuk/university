#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class osoba {
private:
    string imie;
    int wiek;
public:
    void ustawImie(string imie, int wiek){
        this->imie = imie;
        this->wiek = wiek;
    }
    void wypiszImie();
};

void osoba::wypiszImie(){
    cout << "imie: " << imie << ", wiek: " << wiek << endl;
}

class mebel {
    string nazwa;
    int ilosc_nog;
    float waga;
    int szerokosc;
    int wysokosc;
    int dlugosc;
};

int main()
{
    osoba *Karol = new osoba;
//    (*Karol).wiek = 22;
//    cout << (*Karol).wiek << endl;
//    Karol-> wiek= 33;
//    cout << Karol -> wiek << endl;
    Karol->ustawImie("adam",22);
    Karol->wypiszImie();

    delete Karol;

    return 0;
}

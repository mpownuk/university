#define PRACOWNIK_H

#include <iostream>
#include <string>

using namespace std;

class Pracownik {
    private:
        string nazwisko;
        int pensja;
    public:
        Pracownik();
        Pracownik(string Nazwisko);
        Pracownik(int Pensja);
        Pracownik(string Nazwisko, int Pensja);

        void setNazwisko(string Nazwisko);
        string getNazwisko();

        void setPensja(int pensja);
        int getPensja();

        void showData();

        ~Pracownik();
};

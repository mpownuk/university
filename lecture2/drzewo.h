
#include <iostream>

using namespace std;

class Drzewo {
    private:
    static char ID;
    char id;
    string nazwa;
    int wysokosc, rozpietosc;
    public:
    Drzewo(string n, int w, int r);
    void wyswietl();
    ~Drzewo();

};

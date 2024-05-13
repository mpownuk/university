#include <iostream>

using namespace std;

class Wichura {
private:
    string nazwa;
    double predkosc, czas, rozmiar;
public:
    void dodaj_wichure(){
        cout<<"nazwa: "; cin>>nazwa;
        cout<<" predkosc: "; cin>> predkosc;
        cout<<" czas: "; cin>> czas;
        cout<<" rozmiar: "; cin>> rozmiar;
    }
};

int main()
{
    Wichura wich1;
    wich1.dodaj_wichure();
    return 0;
}

#include "pracownik.h"
#include <iostream>
#include <fstream>

Pracownik:: Pracownik(){
    nazwisko = "";
    pensja = 0;
};

Pracownik::Pracownik(string Nazwisko){
    nazwisko = Nazwisko;
};

Pracownik::Pracownik(int Pensja){
    pensja = Pensja;
};

Pracownik::Pracownik(string Nazwisko, int Pensja){
    nazwisko = Nazwisko;
    pensja = Pensja;
};

void Pracownik::setNazwisko(string Nazwisko){
    nazwisko = Nazwisko;
}

string Pracownik::getNazwisko(){
    return nazwisko;
}
void Pracownik::setPensja(int Pensja){
    pensja = Pensja;
}
int Pracownik::getPensja(){
    return pensja;
}
void Pracownik::showData(){
    cout << " pracownik nazywa się: "<<nazwisko<<", zarabia: "<< pensja<< "$."<<endl;
}
Pracownik::~Pracownik(){
    string filename;
    if(nazwisko.empty()){
        filename = "pracownik.txt";
    } else {
        filename = nazwisko + ".txt";
    }
    ofstream file(filename);
    if(!nazwisko.empty() && (bool)pensja){
        file << "nazwisko: " << nazwisko << ", pensja: " << pensja << endl;
    } else if( nazwisko.empty()){
        file << "nazwisko: nieznane"  << ", pensja: " << pensja << endl;
    } else if(!(bool)pensja){
        file << "nazwisko: " << nazwisko << ", pensja: 0" << endl;
    } else {
        file << "nazwisko: nieznane, pensja: 0" << endl;
    }
    cout << "fhyrfvbyrbhvubvebuvehbvuebvuebvieurvueirv  "<< endl;
    file.close();

}

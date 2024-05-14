
#include <iostream>
#include "drzewo.h"

Drzewo::Drzewo(string n="dab", int w=22, int r=7){
    if(n==" " || w <= 0 || r <= 0 ){
        cout << "bledne dane!!"<< endl;
    } else{
        nazwa = n; wysokosc = w; rozpietosc = r;id = ID++;
    }
}
void Drzewo::wyswietl(){
    cout<<nazwa<<", "<<wysokosc<<", "<<rozpietosc<<", "<< id<<endl;
}

Drzewo::~Drzewo(){
    cout<<"drzewo "<<id<< " usunieto"<<endl;
};
char Drzewo::ID='A';

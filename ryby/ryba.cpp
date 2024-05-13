#include <iostream>
#include <cstdlib>
#include <fstream>
#include "ryba.h"

using namespace std;

void Ryba::wczytajRybe(){

cout<<"nr ryby:";cin>>nrRyby;

fstream plik;
plik.open("ryby.txt",ios::in);


for (int i = 0; i < nrRyby; ++i) {
    if(!getline(plik, nazwaRyby)){
    nazwaRyby="nie ma takiej ryby";
    }
}

plik.close();
cout<<endl;
}

void Ryba::wyswietlRybe(){
    cout<<" wybrana ryba to: "<<nazwaRyby<<endl;
}

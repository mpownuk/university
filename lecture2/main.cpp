#include <iostream>
#include "drzewo.h"

using namespace std;

int main()
{
    Drzewo d1("buk", 12,23);
    Drzewo d2();
    Drzewo d3("swierk",3,44);
    Drzewo d4("brzoza",2,2);
    d3.wyswietl();

    Drzewo* d5 = new Drzewo("www",2,3);
    d5->wyswietl();
    delete d5;
    return 0;
}

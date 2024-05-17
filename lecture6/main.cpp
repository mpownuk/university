#include <iostream>

using namespace std;

template <typename someType>
someType wieksza(someType a, someType b){
    return (a>b) ? a : b;
}

void wypisz(){} // funkcja bazowa - musi byc, inaczej nieskonczona rekurencja
template <typename t,typename... strs>
void wypisz(t first, strs... args){

    cout << first <<endl;
    wypisz(args...);
}

template <typename sT>
class Schowek{
    sT sejf;
    public:
    void schowaj(sT x){
        sejf = x;
    }
    sT oddaj(){
        return sejf;
    }
};
int main()
{

    int x = 3,y = 9,z;
    z = wieksza(x,y); //parametryzacja

    cout << wieksza(2,6)<<endl;
    cout << wieksza(3.3,6.3)<<endl;
    cout << wieksza('a','r')<<endl;
    cout<<z<<endl;


    wypisz("a","b");
    wypisz("aaaa","dgdg","sdhdhsh","ddpp");

    Schowek<int> liczba;
    Schowek<char> znak;
    liczba.schowaj(22);
    cout<< liczba.oddaj();

    return 0;
}

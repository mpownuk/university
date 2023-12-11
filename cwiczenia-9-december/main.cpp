#include <iostream>

using namespace std;

//  =====================================  siasc do zadan z cwiczen i wykladow  ==========================================  //
//  =====================================  siasc do zadan z cwiczen i wykladow  ==========================================  //
//  =====================================  siasc do zadan z cwiczen i wykladow  ==========================================  //
// struktury, rekurencja, funkcja
// struktury, rekurencja, funkcja
// struktury, rekurencja, funkcja

//   =================================== zad 5.15

 /*   int razydwa(int Z){

        return Z * 2;
    }


void zmienna(int &a){

// ---- & wskazuje na komorke w pamieci zareerwowana dla zmiennej a - zate podczas wywolania teh fukncji, zmienna a jest modyfikowana globalnie
   a=a+3;
   cout << a << endl;
}



int powiel (int liczba){
    for (int i =0; i<5;i++){
    cout << liczba;
    cout << endl;
    }
}


//  =======================   warto utrzynywac funkcje main w klarownosci a dane podawac podczas wywoluwania konkretnych funkcji


    void gwiazdki(){
    int i,j,n;
    cout << "wprowadz liczbe wierszy: " << endl;

    cin >> n;
        for ( i = 1; i <=n; i--){
            for (j = 1; j <= i ; j++){
                cout << "* ";
            }
            cout << "\n";
        }
            for (j = 1; j <= i ; j++){
                cout << "* ";
            }
            cout << "\n";

    }
*/

long long suma ( int n){
    if(n<1){
        return 0;
    }
    return n+suma(n-1);
}


int main()
{

int n;
cout << "podaj liczbe: "<< endl;

cin>> n;
cout << "suma " << n << " kolejnych liczb naturalnych wynosi: "<< suma(n) <<endl;

//  gwiazdki();

/*
int liczba;
    cout <<"podaj znak do wyswietlenia: " << endl;
    cin>> liczba;
    powiel(liczba);
    system("pause");

    int a;
    cin>>a;
    zmienna(a);
    cout << a << endl;
    */

//    int L;
//    cin >> L;
//    cout << razydwa(L) << endl;

    return 0;
}

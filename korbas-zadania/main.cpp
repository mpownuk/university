#include <iostream>

using namespace std;

// zad 4.1:
void tenCharTab(){

    int n = 10;
    char TAB[n];
    for ( int i = 0; i < n; i++){
        cin >> TAB[i];
    }

    cout << TAB[7] << " " << TAB [0] << endl;
}

// zad. 4.2
 void isIntYinArr(){
    int n = 12;
    int tab[n];
    for(int i = 0; i < n; i++){
        cin >> tab[i];
    }
    int Y;
    cin >> Y;
    int counter = 0;
    for ( int i = 0; i < n; i++){
        if(tab[i] == Y){
            counter++;
        }
    }
    cout << counter;
 }

 // zad 4.3
 void writeIntFromBack(){
    int n;
    bool waitingForValidN = true;
    do {
        cin >> n;
        if (n >=1 && n <=200){
        waitingForValidN = false;
            cout << "n is valid"<< endl;
        } else {
            cout << "n is invalid!!!"<< endl;
        }
    } while (waitingForValidN);

    int tab[n];

    for(int i = 0; i < n; i++){
        cin >> tab[i];
    }
    for (int i = n-1; i>=0; i--){
        cout << tab[i] << " ";
    }
    cout<< endl;
 }

 // zad 4.4
 void write10NumsBackFrom20(){
    int n = 20;
    int tab[n];
    for ( int i = 0; i < n; i++){
        cin >> tab[i];
    }
    for( int i = (n/2)-1; i >=0; i--){
        cout << tab[i] << " ";
    }
    cout << endl;
 }

 // zad 7.1
 void pointers(){
    double R;
    cin >> R;
    cout << &R << " " << R << endl;
    double *W = &R;
    cout << &W << " " << W << endl;
    cout << *W << endl;
 }

//zad 7.2

void dynamicArr(){
    int *tab = new int[10];
    for ( int i = 0; i < 10; i++){
        cin >> tab[i];
    }
    for ( int i =9; i >=0; i--){
        cout << tab[i] << " ";
    }
    delete[] tab;
}

int main()
{
dynamicArr();

//    pointers();
//    write10NumsBackFrom20();
//    writeIntFromBack();
//    tenCharTab();
//    isIntYinArr();
    return 0;
}

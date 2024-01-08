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

int main()
{
//    tenCharTab();
    isIntYinArr();
    return 0;
}

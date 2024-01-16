#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void fref(int &a){
    a = -a*2;
}

void fptr(int *a){
    *a = -*a*2;
}

int main (){
    int b = 10;
    fref(b);
    cout << b<< endl;

    fptr(&b);
    cout << b<< endl;
return 0;
}

/*
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

// zad 7.4

void reverseStringArr(){
    int N;
    do {
        cin >> N;
    } while (N < 0);

    string *tab = new string[N];
    for (int i = 0; i < N; i++){
        cin >> tab[i];
    }

    for ( int i = N-1; i>=0; i--){
        for( int j=tab[i].length()-1; j>=0; j--){
            cout << tab[i][j];
        }
        cout << " ";
    }

    delete [] tab;
}

// zad 7.5
void staticRandomIntArr(){
    int TAB[100],N=0, *TT;
    for (int i =0; i < 100; i++){
        TAB[i] = (int)rand() % 10;
        if(TAB[i]> 5){
            N++;
        }
    }

    TT = new int[N];
    int j=0;
    for ( int i = 0; i < 100; i++){
        if(TAB[i]>5){
            TT[j] = TAB[i];
            j++;
        }
    }

    for (int i = N-1; i >=0; i--){
        cout << TT[i] << " ";
    }
    delete [] TT;
}

// zad 5.6
    double POT ( double a, int num){
        int sum = 1;
        for ( int i = 1; i <= num; i++){
            sum *= a;
        }
        return sum;
    }

void POTWraper(){
    double R = 0;
    int n = 0;
    cin >> R;
    cin >> n;
    for (int i=1;i<=n;i++){
        cout << POT (R,i);
        if (i<20){
            cout << " ";
        }
    }
    cout << endl;
}

int main()
{
    srand(time(NULL));
    POTWraper();
//    staticRandomIntArr();
//    reverseStringArr();
//    dynamicArr();
//    pointers();
//    write10NumsBackFrom20();
//    writeIntFromBack();
//    tenCharTab();
//    isIntYinArr();
    return 0;
}


*/

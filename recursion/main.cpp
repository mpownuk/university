#include <iostream>

using namespace std;

// Napisz program wyznaczajacy sume "n" kolejnych liczb naturalnych.
int sum (int n){
    if(n<1){
        return 0;
    } else {
        n += sum(n-1);
    }
    return n;

}
// Dany jest ciag {wn}: w(0)=5; w(n)=w(n-1)*5+3, dla n>0.
// napisz program, który wypisze w(2), w(4) i w(10) oddzielone przecinkami.

int w(int n){
    if(n<1){
        return 5;
    }
    return w(n-1)* 5 + 3;
}

 /* ZADANIE DO SAMODZIELNEJ PRACY
 Funkcja o prototypie int C(int n) zwraca n-ty wyraz ciagu
 zdefiniowanego nastepujaco: C(0)=1; C(n)=C(n-1)+2n+1
 Napisz program, ktory:
 a) definiuje funkcje C,
 b) wypisuje w kolejnych wierszach wyrazy od c(0) do c(12),
 c) pobiera od uzytkownika liczbe calkowita dodatnia 'k'
    i wypisuje element c(k)
 UWAGA: w definicji funkcji zastosuj rekurencje.
*/

int c(int n){
    if(n<1){
        return 1;
    }
    return c(n-1)+2*n+1;
}

/* ZADANIE DO SAMODZIELNEJ PRACY
 Napisac program korzystajac z funkcji rekurencyjnej,
 ktory obliczy sume liczb z przedzialu podanego przez uzytkownika.
*/

long int userSum(long int m, long int n){
    if( m <= n){
        return n;
    } else {
        return m + userSum(m-1, n);
    }
}

int addTwo(int n){
    int called = 0;
    if(n <= -2){
    called = 3;
        return called;
    } else {
        called = addTwo(n-1)+2;
        cout << called << endl;
        return called;
    }
}

long int potega( int x, int n){
    if (n<=0) {
        return 1;
    } else {
        return x * potega(x, n-1);
    }
}

int fib(int n){
    if(n <=1 || n==2) {
        return 1;
    }
    else {
        return fib(n-1) + fib(n-2);
    }
}

long int silnia ( int n){
    if (n<=0){
        return 1;
    } else{
        return n * silnia(n-1);
    }
}

int SDW(int n){
    if ( n==1) {
        return 1;
    }
    else{
        if( (n%2) ==0){
            return SDW(n-2)*n;
        } else {
            return SDW(n-1)*n;
        }
    }
}
int main()
{


cout << SDW(3) << endl;
/*
cout << silnia(1)<< endl;
cout << silnia(2)<< endl;
cout << silnia(3)<< endl;
cout << silnia(4)<< endl;
cout << silnia(5)<< endl;

cout << fib(1) << endl;
cout << fib(2) << endl;
cout << fib(3) << endl;
cout << fib(4) << endl;
cout << fib(5) << endl;
cout << fib(46) << endl;

cout << potega(2,0) << endl;
cout << potega(2,1) << endl;
cout << potega(2,2) << endl;
cout << potega(2,3) << endl;
cout << potega(2,4) << endl;

int a,b;
cin >> a;
cin >>b;

cout << userSum(a, b);
cout << endl;addTwo(-2);
cout << endl;addTwo(-1);
cout << endl;addTwo(0);
cout << endl;addTwo(1);
cout << endl;addTwo(2);
cout << endl;addTwo(3);
cout << endl;addTwo(4);
cout << endl;addTwo(5);
cout << endl;addTwo(6);
cout << endl;addTwo(7);
cout << endl;
*/
/*
    for ( int i = 0; i <= 12; i++){
        cout << c(i) << endl;
    }
    int k;
    cin >> k;
    cout << c(k) << endl;
    */

    //cout << w(2) << "," << w(4) << "," << w(10) << endl;
/*
    cout << sum(-2) << endl;
    cout << sum(0) << endl;
    cout << sum(1) << endl;
    cout << sum(2) << endl;
    cout << sum(3) << endl;
    cout << sum(4) << endl;
    cout << sum(5) << endl;
    */

    return 0;
}

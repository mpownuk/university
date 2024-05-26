#include <iostream>
#include <vector>
#include "functionTemplate.h"
#include "Stos.h"

using namespace std;

int main()
{
    int intArr[] = {1, 2, 4, 1, 2, 6};

    double doubleArr[] = {3.2, 1.5, 4.8, 2.9, 3.14};

    char charArr[] =  { 'a','b','x','c','d','e','f'};

    cout << "Max int:"<< znajdzMax(intArr,6)<< endl;

    cout << "Max double:"<< znajdzMax(doubleArr,5)<< endl;

    cout << "Max char:"<< znajdzMax(charArr,7)<< endl;


    bubbleSortArray(intArr, 6);
    bubbleSortArray(doubleArr, 5);
    bubbleSortArray(charArr, 7);

try{
    Stos<int> s1(5);
    s1.addToStack(4);
    cout<<s1.checkIfEmpty()<<endl;
    cout<<s1.countOfElems()<<endl;
    s1.removeFromStack();
    cout<<s1.checkIfEmpty()<<endl;
} catch(int e){
    cout<<e<<endl;
 }
try{
    Stos<char> s2(1);
    s2.addToStack('r');
    s2.addToStack('r');
    cout<<s2.checkIfEmpty()<<endl;
    cout<<s2.countOfElems()<<endl;
    s2.removeFromStack();
    cout<<s2.checkIfEmpty()<<endl;
 }catch(int e){
    cout<<"Error!: "<<e<<endl;
 }
    return 0;
}

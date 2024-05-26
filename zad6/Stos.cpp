#include <iostream>
#include <vector>
#include "Stos.h"

using namespace std;

///////////////////////// konieczne wyrazne wskazanie typow z powodu bledow kompliacji powodowanych rozdzieleniem definicji klasy i metod do oddzielnych plikow
template class Stos<int>;
template class Stos<double>;
template class Stos<char>;
///////////////////////////////////////////////////////////////////////////////////////


template<class sT>
Stos<sT>::Stos(int stackSize) : sizeS(stackSize) {}

template<class sT>
void Stos<sT>::addToStack(sT elem) {
    if (Stack.size() >= sizeS) {
        throw -1;
    }
    Stack.push_back(elem);
}

template<class sT>
void Stos<sT>::removeFromStack() {
    if (Stack.empty()) {
        throw -1;
    }
    sT elem = Stack.back();
    Stack.pop_back();
    cout << elem << endl;
}

template<class sT>
bool Stos<sT>::checkIfEmpty() {
    return Stack.empty();
}

template<class sT>
int Stos<sT>::countOfElems() {
    return Stack.size();
}


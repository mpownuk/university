#include <iostream>
#include <vector>

using namespace std;

template <typename sT>
class Stos {
private:
    vector<sT> Stack;
    int sizeS;
public:
    Stos(int stackSize);

    void addToStack(sT elem);

    void removeFromStack();

    bool checkIfEmpty();

    int countOfElems();
};

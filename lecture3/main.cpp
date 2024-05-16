#include <iostream>
#include "friend.h"

using namespace std;

int main()
{
    Text *t1 = new Text("adam wkladam");
    wypisz(t1);
    delete t1;
    return 0;
}

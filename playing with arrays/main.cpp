#include <iostream>

using namespace std;

int main()
{
    int t[15];
    for (int i = 0; i<10; i++){
        t[i] = i;
        cout << t[i] << " ";
    }
    for(int i = 0 ; i < 15; i++){
        cout << t[i] << " ";
    }
    t[20] = 213;
    cout << endl << t[20];

}

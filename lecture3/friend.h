#include <iostream>

using namespace std;

class Text{
    private:
    string strNapis;
    public:
    Text(string str = "przykladowy napis");

    friend void wypisz(Text*);
};

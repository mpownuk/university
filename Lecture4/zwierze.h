#include <iostream>

using namespace std;

class Zwierze {
    public:
    Zwierze();
    void jedz();
};

class Ssak :public Zwierze{
    public: Ssak();
    void oddychajPlucami();
};

class Ryba{
public:
Ryba();
void oddychajSkrzelami();
};

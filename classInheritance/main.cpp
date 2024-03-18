 #include <iostream>
#include "animals.h"

using namespace std;

int main()
{
        string name,owner,favToy; int age; bool hasLongFur;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter owner: ";
        cin >> owner;
        cout << "Enter age: ";
        cin >> age;

    Fish myFish(name, owner, age, 1);
    myFish.showAnimal();
    cout << myFish.getGold()<<endl;
    myFish.setGold(0);
    cout << myFish.getGold()<<endl;

    myFish.changeOwner("adam");
    myFish.showAnimal();


    return 0;
}

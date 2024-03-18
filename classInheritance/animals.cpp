#include "animals.h"

using namespace std;

Animal::Animal(string Name, string Owner, int Age){
    name = Name;
    owner = Owner;
    age = Age;
}

void Animal::showAnimal(){
    cout << "Name: " << name << endl;
    cout << "Owner: " << owner << endl;
    cout << "Age: " << age << endl;
}


Dog::Dog(string Name, string Owner, int Age, string FavToy): Animal(Name, Owner, Age){
    favToy = FavToy;
}

void Dog::changeAge(int Age){
    age = Age;
}

void Dog::setFavToy(string FavToy){
    favToy = FavToy;
}

string Dog::getFavToy(){
    return favToy;
}

Cat::Cat(string Name, string Owner, int Age, bool HasLongFur): Animal(Name, Owner, Age){
    hasLongFur = HasLongFur;
}

void Cat::changeOwner(string newOwner){
    owner = newOwner;
}

void Cat::setFur(bool Fur){
    hasLongFur = Fur;
}

bool Cat::getFur(){
    if(hasLongFur){
        cout << "Fur is long!!" << endl;
    } else {
        cout << "Fur is short!!" << endl;
    }
    return hasLongFur;
}

Fish::Fish(string Name, string Owner, int Age, bool IsGold): Animal(Name, Owner, Age){
    isGold = IsGold;
}
void Fish::changeOwner(string newOwner){
    owner = newOwner;
}

void Fish::feedFish(){
    cout << "You fed the fish!" << endl;
}

bool Fish::getGold(){
    return isGold;
}
void Fish::setGold(bool gold){
    isGold = gold;
}

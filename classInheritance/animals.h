#define ANIMAL_H
#define DOG_H
#define CAT_H
#define FISH_H

#include <iostream>
#include <string>

using namespace std;

class Animal {
    private:
        string name;
    protected:
        string owner;
    public:
        int age;
        Animal(string Name, string Owner, int Age);
        void showAnimal();
};

class Dog: public Animal{
    private:
        string favToy;
    public:
        Dog(string Name, string Owner, int Age, string FavToy);
        void changeAge(int Age);
        void setFavToy(string FavToy);
        string getFavToy();
};

class Cat : public Animal {
    private:
        bool hasLongFur;
    public:
        Cat(string Name, string Owner, int Age, bool HasLongFur);
        void changeOwner(string newOwner);
        void setFur(bool Fur);
        bool getFur();
};

class Fish : public Animal {
    private:
        bool isGold;
    public:
        Fish(string Name, string Owner, int Age, bool IsGold);
        void changeOwner(string newOwner);
        void feedFish();
        void setGold(bool gold);
        bool getGold();
};

#include <iostream>

using namespace std;

class Employee {
private:
    string Name;
    string Company;
    int Age;
public:
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }

    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }
    void IntrodueYourself(){
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
        cout << endl;
    };
};

int main()
{
        Employee Adam = Employee("Adam", "IBM", 21);
        Adam.IntrodueYourself();

        Employee Basia  = Employee("Basia", "XYZ", 33);
        Basia.IntrodueYourself();
    return 0;
}

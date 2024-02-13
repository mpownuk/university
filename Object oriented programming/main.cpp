#include <iostream>

using namespace std;

class AbstractEmployee{
    virtual void askForPromotion() = 0;
};

class Employee : AbstractEmployee {
protected:
    string Name;
private:
    string Company;
    int Age;
public:
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void askForPromotion(){
        if(Age > 30){
            cout << Name << " got promoted!!" << endl;
        } else {
            cout << Name << " didn't got promoted!!" << endl;
        }
    }
    virtual void work(){
        cout << Name << " is working on papers." << endl;
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
        if(age >=18)
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

class Developer : public Employee {
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage): Employee  (name, company, age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBugs(){
        cout << Name << " fixed bugs!" << endl;
    }
//    void work(){
 //       cout << Name << " is writing code." << endl;
  //  }
};

class Teacher: public Employee {
public:
    string Subject;
    Teacher(string name, string company, int age, string subject): Employee  (name, company, age){
        Subject = subject;
    }
    void prepareLesson(){
        cout << Name << " is preparing " << Subject << " lesson." << endl;
    };
        void work(){
        cout << Name << " is guiding lesson." << endl;
    }
};

int main()
{
        Employee Adam = Employee("Adam", "IBM", 21);
        Adam.IntrodueYourself();

        Employee Basia  = Employee("Basia", "XYZ", 33);
        Basia.IntrodueYourself();

        Basia.setAge(12);
        cout << Basia.getAge() << endl;
        Basia.askForPromotion();
        Adam.askForPromotion();

        Developer Celina = Developer("Celina", "ABC", 29, "cobol");
        Celina.fixBugs();
        Celina.askForPromotion();

        Teacher Byk = Teacher("Byk", "Ist school of being salty", 44, "math");
        Byk.prepareLesson();

        Adam.work();
        Celina.work();
        Byk.work();

        Employee * e1 = & Celina;
        Employee * e2 = & Byk;

        e1->work();
        e2->work();
    return 0;
}

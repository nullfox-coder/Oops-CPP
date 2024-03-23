// Base(Parent) Class and Derived(Child) Class
// child class all method and properties as parent has
// child class also inherit constructor from employee
// Private -  we can not access private attributes of parent class in child class
// Protected - accessible fo rchild class

#include <iostream>
using namespace std;

class Employee {
private:
    string Name;
    string Company;
    int Age;

public:
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

class Developer: Employee {
private:
    string ProgrammingLanguage;
public:
    Developer(string name, string company, int age,string Planguage)
        : Employee(name,company,age)
    {
        ProgrammingLanguage=Planguage;
    }

    void FixBug() {
        cout<<"Satyam fixed bug using "<<ProgrammingLanguage;
    }
};
int main(){
    Employee emp1 = Employee("Satyam", "Meta", 25);
    Developer d = Developer("Satyam","Amazon",25,"C++");
    d.FixBug();
}
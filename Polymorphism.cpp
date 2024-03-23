// Polymorphism - Poly+morph - many forms
// describes the ability of method and object to have many forms
// the most common use case - parent class reference is used to refer to an object of child class


#include <iostream>
using namespace std;

class Employee {
private:
    string Company;
    int Age;

public:
    string Name;
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion()
    {
        cout<<" You are Promoted!";
    }
    virtual void Work()
    {
        cout<<Name<<" is checking email, task backlog, performing those task"<<endl;
    }
};

class Developer:public Employee {
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
    void Work()
    {
        cout<<Name<<" is writing Code"<<endl;
    }
};

class Teacher:public Employee{
private:
    string Subject;
public:
    Teacher(string name,  string company, int age, string subject)
        :Employee(name,company,age)
    {
        Subject = subject; 
    }
    void PrepareLesson() {
        cout<<Name<<" is preparing"<<endl;
    }
    void Work()
    {
        cout<<Name<<" is teaching DSA."<<endl;
    }
};
int main(){
    Developer d = Developer("Satyam","Amazon",25,"C++");
    Teacher t = Teacher("John","Code Scool", 35, "DSA");
    d.Work();
    t.Work();
    //or 
    Employee* e1 = &d;
    Employee* e2 = &t;

    e1->Work();
    e2->Work();
}
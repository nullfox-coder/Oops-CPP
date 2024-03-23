// Hiding Complex thing behind procedure that makes those things look simple
// in java we use interface and in c++ we use abstract class
// to make our method obligatoy() - make the function pure virtual function
#include <iostream>
using namespace std;

class AbstractEmployee {
    // pure virtual function
    // The = 0 syntax declares a pure virtual function, it has nothing to do with the return value.
    // If a class contains at least one pure virtual function, that makes the class "abstract", 
    // which means it cannot be instantiated.
    // In practice, such classes need to be concretized by subclassing and implementing the virtual function(s).
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee {
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
    void AskForPromotion(){
        if(Age>30)
        {
            cout<<Name<<" got promoted!";
        }
        else
        {
            cout<<Name<<" No promotion!";
        }
    }

};
int main()
{
    Employee emp1 = Employee("Satyam","Meta",25);
    emp1.AskForPromotion();
}
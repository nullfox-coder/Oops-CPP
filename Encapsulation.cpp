// capsulating data on method that operates on that data
// we provide ways to interact other class to our class
// we provide specific public function
// getter and setters
#include <iostream>
using namespace std;

class Employee{
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name) //setter
    {
        Name = name;
    }
    string getName() // getter
    {
        return Name;
    }
    void setCompany(string company) //setter
    {
        Company = company;
    }
    string getCompany() // getter
    {
        return Company;
    }
    void setAge(int age) //setter
    {
        Age = age;
    }
    int getAge() // getter
    {
        return Age;
    }
};
int main()
{
    Employee emp1;
    emp1.setName("Satyam");
    emp1.setCompany("Meta");
    emp1.setAge(25);
    cout<<emp1.getName();
}
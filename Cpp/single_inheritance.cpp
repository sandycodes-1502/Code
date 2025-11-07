#include <iostream>
using namespace std;
class Person
{
public: 
    string name;
    int age;
    void getPersonInfo()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
    }
    void showPersonInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person
{
public:
    string employeeID;
    string department;
    void getEmployeeInfo()
    {
        getPersonInfo();
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cout << "Enter Department: ";
        cin >> department;
    }
    void showEmployeeInfo()
    {
        showPersonInfo();
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
    }
};

int main(){
    Employee emp;
    emp.getEmployeeInfo();
    cout << "\n=====Employee Details=====\n" << endl;
    emp.showEmployeeInfo();
    return 0;
}
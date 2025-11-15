#include <iostream>
using namespace std;

class Person{
    public:
        string name;
        string job;
        int age;

    void checkProfession(){
        if (job == "Student" || job == "student")
        {
            cout << name << " is a student.\n";
        }
        else{
            cout << name << " is a working professional.\n";
        }
    }

    void checkage(){
        if (age >= 18)
        {
            cout << name << " can vote!\n";
        }else{
            cout << name << " cannot vote!\n";
        }
        
    }
        
};

int main(){
    Person P1;
    cout<< "Enter First Name: ";
    cin >> P1.name;
    cout << "\nEnter job/Student: ";
    cin >> P1.job;
    cout << "\nEnter age: ";
    cin >> P1.age;
    P1.checkProfession();
    P1.checkage();

    cout << "\n=====Person Details=====\n";
    cout << "\nFirst Name: " << P1.name;
    cout << "\nJob: " << P1.job;
    cout << "\nAge: " << P1.age;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
    string firstname;
    string lastname;

    void printFullName(){
        cout<<"Hi " << firstname << " " << lastname << "!!!" << endl;
    }
};

int main(){
    Person p1;
    cout<< "Enter First Name: " << endl;
    getline(std::cin, p1.firstname);
    cout<< "Enter Last Name: "<< endl;
    getline(cin, p1.lastname);

    p1.printFullName();
}
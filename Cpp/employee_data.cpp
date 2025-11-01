#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
#include <iomanip>
using namespace std;

class Employee { 
public: 
    int id;
    string name;
    float salary;
};
int main(){
    Employee emp;
    cout << "Enter Employee ID: ";
    cin >> emp.id;
    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, emp.name);
    cout << "Enter Employee Salary: ";
    cin >> emp.salary;
    try
    {
        ofstream fout("employee.txt");
        if (!fout){
            throw runtime_error("File could not be opened for writing.");
        }
        fout << emp.id << endl;
        fout << emp.name << endl;
        fout << emp.salary << endl;
        fout.close();
        cout << "\nData written Successfully. \n";
    }
    catch(const std::exception& e) 
    {
        cerr << "Exception: " << e.what() << '\n';
        return 1;
    }
    try
    {
        ifstream fin("employee.txt");
        if (!fin){
            throw runtime_error("File could not be opened for reading.");}
        Employee empRead;
        fin >> empRead.id;
        fin.ignore();
        getline(fin, empRead.name);
        fin >> empRead.salary;
        cout << "\nData read from file: \n";
        cout << "Employee ID:      " << empRead.id << endl;
        cout << "Employee Name:    " << empRead.name << endl;
        cout << "Employee Salary:  " << fixed << setprecision(0) << empRead.salary << endl;
        fin.close();
    }
    catch(const std::exception& e){
        cerr << "Exception: " << e.what() << '\n';
        return 1;
    }
return 0;
}
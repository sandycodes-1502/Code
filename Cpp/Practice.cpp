// Book class and storing multiple books using single function
#include <iostream>
using namespace std;

class Book{
    public:
        string name;
        string author;
        double price;
        int year;

    void input(){
        cout << "Enter the name of book: ";
        cin >> name;
        cout << "Enter the price of book: $";
        cin >> price;
        cout << "Enter the author of book: ";
        cin >> author;
        cout << "Enter the year of publish: ";
        cin >> year;
    }

    void display(){
        cout << "Book name is: " << name << endl;
        cout << "Book price is: $" << price << endl;
        cout << "Book author is: " << author << endl;
        cout << "Book year is: " << year << endl;
    }
};

int main(){

    Book B1;
    cout << "Enter details for Book 1: \n"; 
    B1.input();

    Book B2;
    cout << "Enter details for Book 2: \n"; 
    B2.input();

    B1.display();
    B2.display();

    return0;
    
}




#include <iostream>
#include <cmath>
using namespace std;

int hypotenuese(int a, int b){
    return sqrt((a*a) + (b*b));
}

int main(){
    int a, b, hypo;
    cout<< "Enter a: " << endl;
    cin >> a;
    cout<< "Enter b: "<< endl;
    cin >> b;
    hypo = hypotenuese(a, b);
    cout << "Hypotenuese is: " << hypo << endl;    

}
#include <iostream>
#include <cmath>
using namespace std;

int hypotenuese(int a, int b){
    int hypo = pow((a^a + b^b) , 0.5);
    return hypo;  
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
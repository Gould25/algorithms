#include <iostream>
#include "euclid.h"
using namespace std;

int main(){
    int a = 0;
    int b = 0;

    cout << "Enter A: ";
    cin >> a;
    cout << endl;
    cout << "Enter B: ";
    cin >> b;

    cout << "The GCD: " << euclid(a,b) << endl;

}

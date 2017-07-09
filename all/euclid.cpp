/***** Euclids Algorithm *****
Programmer: Jeff Gould
Date: Julu 7, 2017
File: euclid.cpp
Description: function definition file*/

#include <iostream>
#include "euclid.h"

using namespace std;

/*****     Menu function     *****/
void euclid_menu(){
    int number_a = 0;
    int number_b = 0;

    cout << "Enter Number A: ";
    cin >> number_a;
    cout << endl;
    cout << "Enter Number B: ";
    cin >> number_b;
    cout << endl;


    cout << "The Greatest Common Divisor: " << euclid(number_a,number_b)
            << endl << endl;
    cout << "The Smallest Common Denominator: " << lcm(number_a, number_b)
            << endl << endl;
}

/*****     Greatest Common Divisor Function     *****/
int euclid(int a, int b){
    if (b==0){
        return a;
    }
    else{
        return euclid(b,a%b);
    }
}

/*****     Least Common Multiple     *****/
int lcm(int a, int b){
    return ((a * b)/euclid(a, b));
}

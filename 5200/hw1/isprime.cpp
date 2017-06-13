/*
Programmer: Jeff Gould     ID#: 12517284
Date: June 9,2017
Instructor: Dr. Jennifer Leopold     CS5200 HW1
File Name: isprime.cpp
Description: to check if an integer is a strong pseudoprime
                in different bases
*/

#include <iostream>
#include <cmath>

using namespace std;

/*****     variables     *****/

double b = 18;
double n = 27;

bool is_strong_prime(double n, double b);

int main(){

    //for(double i = 2; i <= 13; i++){
    //    b = i;

        if (is_strong_prime(n,b)){
            cout << "n = " << n << " b = " << b << " true" << endl;
        }
        else
            cout << "n = " << n << " b = " << b << " false" << endl;
    //}
return 0;
}
bool is_strong_prime(double n, double b)
{
    double t = n -1;

    if (remainder(pow(b,t)-1,n) == 0){
        return true;
    }
    else
        return false;
}

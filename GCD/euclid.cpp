/***** Euclids Algorithm *****
Programmer: Jeff Gould
Date: Julu 7, 2017
File: euclid.cpp
Description: function definition file*/

#include <iostream>
using namespace std;

int euclid(int a, int b){
    if (b==0){
        return a;
    }
    else{
        return euclid(b,a%b);
    }
}

/***** General Functions Header File *****
Programmer: Jeff Gould
Date: July 8, 2017
File: general.h
compile: c++ -std=c++11 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "general.h"
#include <array>

using namespace std;

// ***** Prints spaces
int spaces(int n){
    for (int i=0;i < n; i++){
        cout << endl;
    }
}

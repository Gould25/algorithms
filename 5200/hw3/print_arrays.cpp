/*
Programmer: Jeff Gould ID#:12517284
Date: June 18, 2017
Instructor: DR. Jenifer Leopold
File: print_arrays.cpp
Description: Functions for printing arrays
*/

#include "PRINT.H"
#include <iostream>
#include <algorithm>

using namespace std;

// print original array
void print_org(int array[], int n){
    for (int i = 0; i < n; i++){
        cout << array[i] << ", ";
    }
    cout << endl;
}
//cout << " Array Length = " << n << ", shift = " << shift << " max value = " << max_ele << endl;

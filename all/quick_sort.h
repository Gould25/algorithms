/***** QUICK SORT Function Header File *****
Programmer: Jeff Gould
Date: March 31, 2017
File: quick_sort.h
Description: function definition file for quick_sort.cpp
compile: c++ -std=c++11 */

#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <iostream>
#include <algorithm>

using namespace std;

// menu function for quick sort
void QS_menu();

// Precondition: array is unsorted
// Postcondition: array is sorted
void quick_sort(int array[], int start, int end);

// generates Random int array of length n filled with values of v
void rand_array();

#endif

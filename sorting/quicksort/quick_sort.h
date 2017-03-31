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

// Precondition: array is unsorted
// Postcondition: array is sorted
void quick_sort(int array[], int start, int end);

#endif

/***** EUCLID Algorithm Function Header File *****
Programmer: Jeff Gould
Date: July 7, 2017
File: euclid.h
Description: function definition file for euclid.cpp
compile: c++ -std=c++11 */

#ifndef EUCLID_H
#define EUCLID_H

#include <iostream>

using namespace std;

// Precondition: menu function
// Postcondition: calls euclid() with user input
void euclid_menu();

// Precondition: 2 integers from input
// Postcondition: GCD is returned
int euclid(int a, int b);

// returns least common multiple
int lcm(int a, int b);

#endif

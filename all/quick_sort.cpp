/***** QUICK SORT Function *****
Programmer: Jeff Gould
Date: March 31, 2017
File: quick_sort.cpp
Description: function definition file
compile: c++ -std=c++11 */

#include <iostream>
#include <algorithm>
#include "quick_sort.h"
#include "general.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int choice = 0, size = 0, value = 0;

// menu function
void QS_menu(){


    cout << "\n\tWelcome to Quick Sort\n" << endl;
    cout << "What type of array would you like to use? \n" << endl;
    cout << "\tEnter: \n\t\t1 for Random \n\t\t2 for user input" << endl;
    cout << "You choose: ";
    cin >> choice;

    cout << "Enter the size of the array you wish to build: ";
    cin >> size;

    cout << "Enter the max value of the elements you wish to use: ";
    cin >> value;

    if (choice == 1){
        rand_array();
    }
    else if (choice == 2){
         //user_array();
    }
}

// quick_sort function
void quick_sort(int array[], int start, int end) {
      int i = start, j = end;
      int mid = array[(start + end) / 2];

      /* partition left and right side of array */
      while (i <= j) {
            while (array[i] < mid)
                  i++;
            while (array[j] > mid)
                  j--;
            if (i <= j) {
                  swap(array[i],array[j]);
                  i++;
                  j--;
            }
      };
      /* recursive calls on left and right partition */
      if (start < j)
            quick_sort(array, start, j);
      if (i < end)
            quick_sort(array, i, end);
}

// randomly generated array
void rand_array(){
    srand(time(NULL));

    int rand_array[size];

    cout << "\n\tRandom Array\n";
    cout << "(";

    for (int i = 0; i < size; i++){
        rand_array[i] = (rand()%(value));
        if (i < size-1)
            cout << rand_array[i] << ", ";
        else
            cout << rand_array[i] << ") ";
    }
    spaces(2);

    quick_sort(rand_array,0,size);

    cout << "\tSorted Array\n";
    cout << "(";
    for (int i = 0; i < size; i++){

        if (i < size-1)
            cout << rand_array[i] << ", ";
        else
            cout << rand_array[i] << ") ";
    }
    spaces(2);
}

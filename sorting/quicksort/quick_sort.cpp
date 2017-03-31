/***** QUICK SORT Function *****
Programmer: Jeff Gould
Date: March 31, 2017
File: quick_sort.cpp
Description: function definition file
compile: c++ -std=c++11 */

#include <iostream>
#include <algorithm>

using namespace std;

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

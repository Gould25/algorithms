/***** test for function *****
compile: g++ -std=c++11 *.cpp */

#include <iostream>
#include <algorithm>
#include "quick_sort.h"

using namespace std;

int main(){
/*
  vector<int> a = {1,5,7,3,45,9,15,77,25};
  cout << " Before" << endl;
  for (int i : a ) {
    cout << i << "\t";
  }
  cout << endl;

  //quick_sort(a);
  cout << "After" << endl;
  for (int i : a ) {
    cout << i << "\t";
  }
  cout << endl;
  return 0;

*/
  int a[] = {10,5,7,3,45,9,15,77,25,99,44,88,22,11,66,22,15,154,75,255};
  int start = 0;
  int end = 20;

  cout << " Before" << endl;

  for (int i = 0; i < end; i++){
    cout << a[i] << " ";
  }
  cout << endl;

  quick_sort(a, start, end);

  cout << "After" << endl;

  for (int i = 0; i < end; i++){
    cout << a[i] << " ";
  }
  cout << endl;
}

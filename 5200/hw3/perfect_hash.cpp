/*
Programmer: Jeff Gould     ID#: 12517284
Date: June 17,2017
Instructor: Dr. Jennifer Leopold     CS5200 HW3
File Name: perfect_hash.cpp
Description: to create a perfect hash table
compile with c++11
*/

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

    /*****     variables     *****/

    int S[] = {5, 16, 64, 39, 28, 3, 22, 9, 33, 7, 31, 45};
    int n = sizeof(S)/sizeof(S[0]);
    int max_ele = *max_element(S,S+n);
    int t = pow((ceil(sqrt(max_ele)))+1,2);
    int shift = sqrt(t);

    /*****  Print original array and parameters  *****/

    cout << "Original Array size = " << n << endl << endl;
    for (auto i : S){
        cout << i << " ";
    }// end for

    cout << endl << endl;
    cout << "Parameters used =" << endl;
    cout << "Max Element = " << max_ele << endl;
    cout << "The T value = " << shift << endl;
    cout << "The shift = " << shift << endl;
    cout << "The parameters used to place all keys in the 2d array[x][y] =" << endl;
    cout << "x = element / " << shift << endl;
    cout << "y = element % " << shift << endl;
    cout << "x = 64 / " << shift << " = " << 64/shift << endl;
    cout << "y = 64 % " << shift << " = " << 64%shift << endl;
    cout << "Key 36 not in original array but if it was the same parameters "
                "would be used" << endl;

    /***** create and print 2d array *****/

    int S2d[shift][shift];

    // fill array with -1
    for (int i = 0; i < shift; i++){
        for (int j = 0; j < shift; j++)
            S2d[i][j] = -1;
    }// end for

    for (auto i : S){
        int x = i/shift;
        int y = i % shift;
        S2d[x][y] = i;
    }// end for

    cout << "\n2D Array size = " << shift << " x " << shift << endl << endl;
    for (int i = 0; i < shift; i++){
        for (int j = 0; j < shift; j++){
            if (S2d[i][j] == -1)
                cout << "*" << " ";
            else
                cout << S2d[i][j] << " ";
        }// end inner for
        cout << endl;
    }// end outer for

    /***** create and print hashed array *****/

    int hashed[t];

    for (int i = 0; i < shift; i++){
        for (int j = 0; j < shift; j++){
            hashed[j+i*shift] = S2d[i][j];
        }
    }// end for
    cout << "\nHashed Array size = " << t << endl << endl;
    for (auto i : hashed){
        if (i == -1)
            cout << "*" << " ";
        else cout << i << " ";
    }// end for
    cout << endl;

return 0;
}// end main

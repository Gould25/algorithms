/***** easy to run and access All Algorithm File *****
Programmer: Jeff Gould
Date: July 7, 2017
File: main.cpp
Description: function definition file for euclid.cpp
compile: c++ -std=c++11 */

#include <iostream>
#include <cctype>
#include "euclid.h"
#include "quick_sort.h"
#include "general.h"



using namespace std;

int main(){

    /***** Declarations *****/
    int menu_input = 0;

    cout << "\033[2J\033[1;1H";  // clears screen

    while(menu_input != 9){

        cout << "which Algorithm would you like to use? " << endl;
        cout << "\tEnter 1 for QuickSort Algorithm" << endl;
        cout << "\tEnter 2 for Counting Sort Algorithm" << endl;
        cout << "\tEnter 3 for Greatest Common Divisor / Multiplier Algorithm" << endl;
        cout << "\tEnter 9 to Exit" << endl;

        cin >> menu_input;

        switch(menu_input){
            case 1: {
                cout << "\n\t ***** Quick Sort *****\n" << endl;
                QS_menu();
                break;
            }
            case 2: {
                cout << "\n\t ***** Counting Sort *****\n" << endl;
                break;
            }
            case 3: {
                cout << "\n\t ***** The Commons *****\n" << endl;
                euclid_menu();
                break;
            }
            case 9: {
                cout << "\n Thanks for working me out!! See ya later:)" << endl;
                break;
            }
            default: {
                cout << "\n\t ***** Pick from the list *****\n" << endl;
                break;
            }
        }
    }
    return 0;
}

#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//int A;
int N = 2;

void assign(const int x, vector<int> &L)
{
    cout << "x = " << x << " Size of L " << L.size() << endl;
    if (x >= L.size())
    L.resize(x);
    for (int i = 0; i < x; i++)
    L[i]++;
}
vector<int> sort(const int A[ ], const int m)
{
    vector<int> list1(A, A + m), list2, list3;
    for (int i = 0; i < list1.size(); i++){
        cout << "list 1 " << list1[i] << endl;
        assign(list1[i], list2);
        cout << "list 2 " << list2[i] << endl;
    }

    for (int i = 0; i < list2.size(); i++){
        //cout << "list 2 i " << i << endl;
        assign(list2[i], list3);
        cout << "list 3 " << list3[i] << endl;

    }
    cout << "list 2 size " << list2.size() << endl;

    return(list3);
}
// Here’s main( ) to show how the sort could be called; don’t analyze the runtime of main!
int main()
{
    int A[N]; // assume N has been defined as a const in the program
    vector<int> B;
    srand(time(NULL));
    // Initialize data array A with values from 1..100
    cout << "Input data:\n";
    cout << "size of A " <<  sizeof(A) << endl;
    for (int i = 0; i < N; i++)
    {
        A[i] = (rand() % 10) + 1;
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "size of B b4 " << B.size() << " A = " << *A << endl;
    B = sort(A, sizeof(A)/sizeof(int));
    cout << "\nData sorted:\n";
    cout << "size of B " << B.size() << " A = " << *A << endl;
    for (int i = 0; i < B.size(); i++)
        cout << B[i] << " ";
    cout << endl;
    return 0;
}

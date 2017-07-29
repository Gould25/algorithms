#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int A;
int N = 15;
// Reverse order of elements in A from positions 0 to num (inclusive)
void reverseSegment(int A[], const int num)
{
 int temp, j = num;
 for (int i = 0; i < --j; i++)
 {
 temp = A[i];
 A[i] = A[j];
 A[j] = temp;
 }
}
// Return position of minimum value element in A between
// positions i and j (inclusive)
int minInSegment(const int A[], const int i, const int j)
{
 int positionOfMin = i;
 for (int k = i+1; k <= j; k++)
 if (A[k] < A[positionOfMin])
 positionOfMin = k;
return(positionOfMin);
}
void sort(int A[])
{
int positionOfMin, count = 0;
if (N < 2) return; // nothing to sort
for (int i = N; i > 1; i--)
{
positionOfMin = minInSegment(A, 0, i-1);
if (positionOfMin == i-1)
continue;
if (positionOfMin > 0)
{
count++;
reverseSegment(A, positionOfMin + 1);
}
count++;
reverseSegment(A, i);
}
}
// Here’s main( ) to show how the sort could be called; don’t analyze the runtime of main!
int main()
{
    void reverseSegment(int A[], const int num);
    void sort(int A[]);
    int minInSegment(const int A[], const int i, const int j);
int A[N]; // assume N has been defined as a const in the program
srand(time(NULL));
// Initialize data array A with values from 1..100
cout << "Input data:\n";
for (int i = 0; i < N; i++)
{
A[i] = (rand() % 100) + 1;
cout << A[i] << " ";
}
cout << endl;
sort(A);
cout << "\nData sorted:\n";
for (int i = 0; i < N; i++)
cout << A[i] << " ";
cout << endl;
return 0;
}

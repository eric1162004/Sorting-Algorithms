//Insertion sort O(n2)

#include <iostream>
using namespace std;

void InsertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int value = a[i];
        int hole = i;

        while (value < a[hole - 1] && hole > 0)
        {
            a[hole] = a[hole - 1];
            hole--;
        }
        a[hole] = value;
    }
}
void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
}

int main()
{
    int A[] = {9, 3, 6, 5, 2, 1};
    int n = 6;
    InsertionSort(A, n);
    printArray(A, n);
}

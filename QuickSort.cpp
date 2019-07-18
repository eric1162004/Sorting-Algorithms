//Quick sort

#include <iostream>
using namespace std;

int Partition(int *a, int start, int end)
{
    int pivot = a[end];
    int pIndex = start;
    for (int i = start; i < end; i++)
    {
        if (a[i] <= pivot)
        {
            swap(a[i], a[pIndex]);
            pIndex++;
        }
    }
    swap(a[pIndex], a[end]);

    return pIndex;
}

//QuickSort(Array, start index, end index)
void QuickSort(int *a, int start, int end)
{
    if (start < end)
    {
        int pIndex = Partition(a, start, end);
        QuickSort(a, start, pIndex - 1);
        QuickSort(a, pIndex + 1, end);
    }
}

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
}

int main()
{
    int A[] = {4, 3, 6, 9, 2, 1};
    int n = sizeof(A) / sizeof(A[0]);
    //QuickSort(Array, start index, end index)
    QuickSort(A, 0, n - 1);
    printArray(A, n);
}

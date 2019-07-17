//Merge sort

#include <iostream>
using namespace std;

//Merging sub-arrays
//note that an array is passed by reference.
void Merge(int *a, int *L, int leftCount, int *R, int rightCount)
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;

    while (i < leftCount && j < rightCount)
    {
        if (L[i] < R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }
    //Once one of the sub-arrays is done, the remaining sub-array continues
    while (i < leftCount)
        a[k++] = L[i++];
    while (j < rightCount)
        a[k++] = R[j++];
}

void MergeSort(int *a, int n)
{
    int mid, i, *L, *R;
    if (n < 2)
        return;
    mid = n / 2;
    L = new int[mid];
    R = new int[n - mid];

    for (i = 0; i < mid; i++)
        L[i] = a[i];
    for (i = mid; i < n; i++)
        R[i - mid] = a[i];

    MergeSort(L, mid);
    MergeSort(R, n - mid);
    Merge(a, L, mid, R, n - mid);
    free(L);
    free(R);
}
void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
}

int main()
{
    int A[] = {4, 3, 6, 5, 2, 1};
    int n = sizeof(A) / sizeof(A[0]);
    MergeSort(A, n);
    printArray(A, n);
}
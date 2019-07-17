//imporved Bubble sort
//Sorting ends as soon as no swapping is performed

#include <iostream>
using namespace std;

void BubbleSort(int array[], int n)
{
    int flag = 0;

    for (int k = 0; k < n - 1; k++)
    {
        for (int i = 0; i < n - k - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                flag = 1;
            }
            if (flag == 0)
                break;
        }
    }
}

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
}

int main()
{
    int A[] = {10, 3, 6, 5, 2, 1};
    int n = 6;
    BubbleSort(A, n);
    printArray(A, n);
}
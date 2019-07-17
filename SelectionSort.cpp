//Selection sort

#include <iostream>
using namespace std;

void SelectionSort(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int tempMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[tempMin])
                tempMin = j;
        }
        int temp = array[i];
        array[i] = array[tempMin];
        array[tempMin] = temp;
    }
}
int main()
{
    int A[] = {10, 3, 6, 4, 2, 11};
    int n = 6;
    SelectionSort(A, n);
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    return 0;
}
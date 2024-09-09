#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void insertionSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (a[j] < a[j - 1])
            {
                swap(a[j], a[j - 1]);
            }
        }
    }
}

void selectionSort(int a[], int n)
{
    int i = 0, index, j;
    for (i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[index])
            {
                index = j;
            }
        }
        swap(a[i], a[index]);
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    selectionSort(arr, 5);
    for (int k = 0; k < 5; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
    insertionSort(arr, 5);
    for (int k = 0; k < 5; k++)
    {
        cout << arr[k] << " ";
    }
}

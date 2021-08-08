#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

/*----------------------------------Function Declaration------------------------------------*/
void displayArray(int array[], int);

void merge(int *, int, int, int);

void mergesort(int *, int, int);

/*----------------------------------Function Definations------------------------------------*/
void displayArray(int array[], int arraySize)
{
    cout << "\n";
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << "\t";
    }
}

void merge(int arr[], int start, int mid, int end)
{
    int tmp[end + 1];
    int i = start, j = mid + 1, k = start;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            tmp[k] = arr[i];
            i++;
        }
        else
        {
            tmp[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= end)
        {
            tmp[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            tmp[k] = arr[i];
            i++;
            k++;
        }
    }
    for (k = start; k <= end; k++)
    {
        arr[k] = tmp[k];
    }
}

void mergesort(int arr[], int start, int end)
{

    if (start < end)
    {
        int mid = (start + end) / 2;
        mergesort(arr, start, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    int n = 5;
    int worst_arr[n] = {5, 4, 3, 2, 1};
    int average_arr[n] = {12, 11, 13, 5, 6};
    int best_arr[n] = {1, 2, 3, 4, 5};

    int test_arr[12] = {40, 23, 81, 65, 70, 97, 40, 64, 29, 92, 86, 66};

    cout << "\nworst case"
         << "\n";
    mergesort(worst_arr, 0, n - 1);
    displayArray(worst_arr, n);

    cout << "\naverage case"
         << "\n";
    mergesort(average_arr, 0, n - 1);
    displayArray(average_arr, n);

    cout << "\nbest case"
         << "\n";
    mergesort(best_arr, 0, n - 1);
    displayArray(best_arr, n);

    // test case my algo
    cout << "\ntest case"
         << "\n";
    mergesort(test_arr, 0, 12 - 1);
    displayArray(test_arr, 12);
}
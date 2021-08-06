#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

/*
Algorithm for insertion sort

where "arr" is the array of integers & "arr_size" is size if array. 

1. set i = 0 & loop till i < arr_size-1.
    find minimum element "min" from ith index to arr_size-1
    swap element on ith index and minimum
    i++ 
*/

/*----------------------------------Function Declaration------------------------------------*/
void displayArray(int array[], int);

void selectionsort(int *, int);

/*----------------------------------Function Definations------------------------------------*/
void displayArray(int array[], int arraySize)
{
    cout << "\n";
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << "\t";
    }
}

void selectionsort(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size - 1; i++)
    {
        int min = arr[i];
        int minIndex = i;
        for (int j = i + 1; j < arr_size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIndex = j;
            }
        }
        arr[minIndex] = arr[i];
        arr[i] = min;

        displayArray(arr, arr_size);
    }
}

int main()
{
    int n = 5;
    int worst_arr[n] = {5, 4, 3, 2, 1};
    int average_arr[n] = {12, 11, 13, 5, 6};
    int best_arr[n] = {1, 2, 3, 4, 5};

    int test_arr[9] = {22, 20, 38, 55, 45, 33, 50, 66, 50};

    cout << "\nworst case"
         << "\n";
    selectionsort(worst_arr, n);
    cout << "\naverage case"
         << "\n";
    selectionsort(average_arr, n);
    cout << "\nbest case"
         << "\n";
    selectionsort(best_arr, n);

    // test case my algo
    cout << "\ntest case"
         << "\n";
    selectionsort(test_arr, 9);
}
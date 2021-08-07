#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

/*----------------------------------Function Declaration------------------------------------*/
void displayArray(int array[], int);

// void partition(int *, int);

void quicksort(int *, int);

/*----------------------------------Function Definations------------------------------------*/
void displayArray(int array[], int arraySize)
{
    cout << "\n";
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << "\t";
    }
}

int partition(int arr[], int start, int end)
{

    int pivote = arr[start];
    int startIndex = start;
    int endIndex = end;

    while (endIndex > startIndex)
    {
        while (arr[startIndex] <= pivote)
        {
            startIndex++;
        }

        while (arr[endIndex] > pivote)
        {
            endIndex--;
        }

        if (endIndex > startIndex)
        {
            // swapping with startIndex & endIndex
            int tmp = arr[startIndex];
            arr[startIndex] = arr[endIndex];
            arr[endIndex] = tmp;
        }
    }
    // swap pivote with startIndex
    int tmp = arr[start];
    arr[start] = arr[endIndex];
    arr[endIndex] = tmp;

    return endIndex;
}

void quicksort(int arr[], int start, int end)
{
    int loc;
    if (end > start)
    {
        loc = partition(arr, start, end);
        quicksort(arr, start, loc - 1);
        quicksort(arr, loc + 1, end);
    }
}

int main()
{
    int n = 5;
    int worst_arr[n] = {5, 4, 3, 2, 1};
    int average_arr[n] = {12, 11, 13, 5, 6};
    int best_arr[n] = {1, 2, 3, 4, 5};

    int test_arr[12] = {44, 33, 11, 55, 77, 90, 40, 60, 99, 22, 88, 66};

    cout << "\nworst case"
         << "\n";
    quicksort(worst_arr, 0, n - 1);
    displayArray(worst_arr, n);

    cout << "\naverage case"
         << "\n";
    quicksort(average_arr, 0, n - 1);
    displayArray(average_arr, n);

    cout << "\nbest case"
         << "\n";
    quicksort(best_arr, 0, n - 1);
    displayArray(best_arr, n);

    // test case my algo
    cout << "\ntest case"
         << "\n";
    quicksort(test_arr, 0, 12 - 1);
    displayArray(test_arr, 12);
}
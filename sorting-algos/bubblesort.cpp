#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
/*----------------------------------Function Declaration------------------------------------*/
void displayArray(int *, int);
void bubblesort(int *, int);

/*----------------------------------Function Definations------------------------------------*/
void displayArray(int array[], int arraySize)
{
    cout << "\n";
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << "\t";
    }
}

void bubblesort(int arr[], int arr_size)
{
    int sorted = 0;
    bool swaped;
    do
    {
        swaped = false;
        for (int i = 0; i < arr_size - sorted - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                swaped = true;
            }
            displayArray(arr, arr_size);
        }
        sorted++;
    } while (swaped);
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
    bubblesort(worst_arr, n);
    cout << "\naverage case"
         << "\n";
    bubblesort(average_arr, n);
    cout << "\nbest case"
         << "\n";
    bubblesort(best_arr, n);

    cout << "\nfinal test case"
         << "\n";
    bubblesort(test_arr, 12);
}

// 20 steps
//reduced 10 steps by adding sorted count  10 steps
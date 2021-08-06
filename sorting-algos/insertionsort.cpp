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

1. set i = 1 & loop till i < arr_size.
    if element at ith index of array is less then element behind him
        [i] store element in tmp
        [ii] loop from index 0 to i-1 to find appropiate position for element
                if tmp is less then element at jth index
                    [i] push element from jth index to i-1th index one step ahead
                    [ii] put tmp in place of jth index
                    [iii] break the loop
        [iv] display array
    else display array
*/

/*----------------------------------Function Declaration------------------------------------*/
void displayArray(int array[], int);

void insertionsort(int *, int);

void insertionsortGFG(int *, int);

/*----------------------------------Function Definations------------------------------------*/
void displayArray(int array[], int arraySize)
{
    cout << "\n";
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << "\t";
    }
}

// made by me
void insertionsort(int arr[], int arr_size)
{
    for (int i = 1; i < arr_size; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            // store in tmp
            int tmp = arr[i];
            // put tmp at its appropriate position
            for (int j = 0; j < i; j++)
            {
                // if tmp is less then arr[j] then arr[j] = tmp
                // AND move elements from arr[j] to arr[i-1] one step ahead
                if (tmp < arr[j])
                {
                    for (int k = i; k > j; k--)
                    {
                        arr[k] = arr[k - 1];
                    }
                    arr[j] = tmp;
                    break;
                }
            }
            displayArray(arr, arr_size);
        }
        else
        {
            displayArray(arr, arr_size);
        }
    }
}

// from GFG
void insertionsortGFG(int arr[], int arr_size)
{
    int i, key, j;
    for (i = 1; i < arr_size; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
            greater than key, to one position ahead
            of their current position
        */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        displayArray(arr, arr_size);
    }
}

int main()
{
    int n = 5;
    int worst_arr[n] = {5, 4, 3, 2, 1};
    int average_arr[n] = {12, 11, 13, 5, 6};
    int best_arr[n] = {1, 2, 3, 4, 5};

    int test_arr[9] = {20, 15, 35, 60, 45, 30, 55, 60, 50};

    cout << "\nworst case"
         << "\n";
    insertionsort(worst_arr, n);
    cout << "\naverage case"
         << "\n";
    insertionsort(average_arr, n);
    cout << "\nbest case"
         << "\n";
    insertionsort(best_arr, n);

    // test case my algo
    cout << "\ntest case"
         << "\n";
    insertionsort(test_arr, 9);

    // test case GFG
    cout << "\ntest case GFG"
         << "\n";
    insertionsortGFG(test_arr, 9);
}
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
/*----------------------------------Function Declaration------------------------------------*/
void displayArray(int array[]);
void insertionsort(int *, int);

/*----------------------------------Function Definations------------------------------------*/
void displayArray(int array[])
{
    cout << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << "\t";
    }
}

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
            displayArray(arr);
        }
        else
        {
            displayArray(arr);
        }
    }
}

int main()
{
    int n = 5;
    int worst_arr[n] = {5, 4, 3, 2, 1};
    int average_arr[n] = {12, 11, 13, 5, 6};
    int best_arr[n] = {1, 2, 3, 4, 5};

    cout << "\nworst case"
         << "\n";
    insertionsort(worst_arr, n);
    cout << "\naverage case"
         << "\n";
    insertionsort(average_arr, n);
    cout << "\nbest case"
         << "\n";
    insertionsort(best_arr, n);

    // from GFG
    /*
        int i, key, j;
        for (i = 1; i < n; i++)
        {
            key = arr[i];
            j = i - 1;

            /* Move elements of arr[0..i-1], that are
            greater than key, to one position ahead
            of their current position 
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
            displayArray(arr);
        }
    */
}

// 4 steps
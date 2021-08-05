#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
/*----------------------------------Function Declaration------------------------------------*/
bool isSorted(int *, int);

int binarySearch(int, int *, int);

/*----------------------------------Function Definations------------------------------------*/
bool isSorted(int array[], int sizeOfArray)
{
    // TODO: check direction
    for (int i = 0; i < sizeOfArray - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            return false;
            break;
        }
    }
    return true;
}

int binarySearch(int searchItem, int array[], int sizeOfArray)
{
    int left = 0;
    int right = sizeOfArray - 1;
    int mid;
    do
    {
        mid = (left + right) / 2;
        if (array[mid] == searchItem)
        {
            return mid;
            break;
        }
        else if (searchItem > array[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }

    } while (right >= left);
    return 404;
}

int main()
{
    int arr[5] = {1, 2, 4, 5, 6};
    if (isSorted(arr, 5))
    {
        cout << binarySearch(2, arr, 5) << endl;
    }
    else
    {
        cout << "Array is not sorted." << endl;
    }

    return 0;
}
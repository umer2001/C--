#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

/*----------------------------------Function Declaration------------------------------------*/
void largestElementInArray(int a[], int);

// With do-while loop
void largestElementInArrayDoWhile(int a[], int);
/*--------------------------------Function Definations------------------------------------*/
void largestElementInArray(int a[], int arraySize)
{
    int max = a[0];
    int pos = 0;
    for (int i = 1; i < arraySize; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            pos = i;
        }
    }
    cout << "position : " << pos << " , max : " << max << endl;
}

void largestElementInArrayDoWhile(int a[], int arraySize)
{
    int max = a[0];
    int pos = 0;

    int i = 1;
    do
    {
        if (a[i] > max)
        {
            max = a[i];
            pos = i;
        }
        i++;
    } while (i < arraySize);

    cout << "position : " << pos << " , max : " << max << endl;
}

int main()
{
    int arrSize = 5;
    int arr[arrSize] = {4, 10, 6, 8, 2};

    largestElementInArray(arr, arrSize);
    // With do-while loop
    largestElementInArrayDoWhile(arr, arrSize);

    return 0;
}
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

/*----------------------------------Function Declaration------------------------------------*/
void fibonacciSequence();
/*--------------------------------Function Definations------------------------------------*/
void fibonacciSequence()
{
    int num = 1;
    int nextNum = 1;

    for (int i = 1; i <= 20; i++)
    {
        int tmp = num + nextNum;
        nextNum = num;
        num = tmp;
        cout << num << "\t";
    }
}

int main()
{

    fibonacciSequence();
    return 0;
}
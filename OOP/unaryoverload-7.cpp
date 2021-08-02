#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;
/*----------------------------------Function Declaration------------------------------------*/

/*--------------------------------Function Definations------------------------------------*/

/*--------------------------------Class Definations------------------------------------*/

class Number
{
private:
    int a, b;

public:
    Number(int firstInteger = 0, int secondInteger = 0)
    {
        a = firstInteger;
        b = secondInteger;
    }

    void operator++()
    {
        ++a;
        ++b;
    }

    void displayBoth() const
    {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
    }
};

int main()
{
    Number first(10, 15);

    cout << "Values of first object before increment " << endl;
    first.displayBoth();

    // pre-incrementing
    ++first;

    cout << "Values of first object after increment to test increment" << endl;
    first.displayBoth();

    return 0;
}
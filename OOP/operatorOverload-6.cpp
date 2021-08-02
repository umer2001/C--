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

    Number operator+(Number secondOprend)
    {
        return Number(a + secondOprend.a, b + secondOprend.b);
    }

    void displayBoth() const
    {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
    }
};

int main()
{
    Number first(10, 15), second(20, 25), operatorTest;
    operatorTest = first + second;

    cout << "Values of first object" << endl;
    first.displayBoth();
    cout << "Values of second object" << endl;
    second.displayBoth();
    cout << "value of operatorTest object which tests the operator overloading" << endl;
    operatorTest.displayBoth();

    return 0;
}
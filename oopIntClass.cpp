#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
#include "msoftcon.cpp"
#include <msoftcon/msoftcon.h>
using namespace std;
/*----------------------------------Function Declaration------------------------------------*/

/*--------------------------------Function Definations------------------------------------*/

/*--------------------------------Class Definations------------------------------------*/

class Int
{
private:
    int var;

public:
    void init()
    {
        var = 0;
    }

    void set(int n)
    {
        var = n;
    }

    void operator=(int n)
    {
        var = n;
    }

    int operator+(int n)
    {
        return var + n;
    }

    int operator+(Int n)
    {
        return var + n.get();
    }

    int get()
    {
        return var;
    }

    void display()
    {
        cout << var;
    }
};

int main()
{

    Int sum, a, b;

    a = 5;
    b = 11;

    sum = a + b;

    sum.display();

    getch();
}

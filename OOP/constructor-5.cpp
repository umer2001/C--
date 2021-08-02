#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <bits/stdc++.h>

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
    // define 3 objects of Int class
    Int sum, a, b;

    // initialize 2 objects a & b
    a = 5;
    b = 11;

    //save sum in 3rd object
    sum = a + b;

    sum.display();

    getch();
}

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;
/*----------------------------------Function Declaration------------------------------------*/

/*--------------------------------Function Definations------------------------------------*/

/*--------------------------------Class Definations------------------------------------*/

class Parent
{
public:
    Parent()
    {
        cout << "called constructor of Parent class." << endl;
    }

    Parent(string a)
    {
        cout << "called one parameter constructor of parent class." << endl;
    }

    ~Parent()
    {
        cout << "called destructor of Parent class." << endl;
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << "called constructor of child class." << endl;
    }

    Child(string a)
    {
        cout << "called one parameter constructor of child class." << endl;
    }

    ~Child()
    {
        cout << "called destructor of child class." << endl;
    }
};

int main()
{
    // check if parent constructor is called
    // If parent constructor is called then is it of one perameter or default
    Child c1("A1");
    // check if parent constructor is called
    Child c2;
    // checking destructor is called before any expression or just before end of the program
    cout << "destructor" << endl;
    return 0;
}
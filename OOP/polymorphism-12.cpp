#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;
/*----------------------------------Function Declaration------------------------------------*/

/*--------------------------------Function Definations------------------------------------*/

/*--------------------------------Class Definations------------------------------------*/

class GrandParent
{
public:
    virtual void func() const
    {
        cout << "called same function of Grand Parent class" << endl;
    }
};

class Parent : public GrandParent
{
public:
    void func() const
    {
        cout << "called same function of Parent class" << endl;
    }
};

class Child : public Parent
{
public:
    void func() const
    {
        cout << "called same function of child class" << endl;
    }
};

int main()
{
    GrandParent gp1;
    Parent p1;
    Child c1;

    cout << "compile time or static polymorphism" << endl;
    //  compile time or static polymorphism
    gp1.func();
    p1.func();
    c1.func();

    GrandParent *ptr;

    cout << "run time or dynamic polymorphism due to virtual keyword in base class" << endl;
    //  run time or dynamic polymorphism due to virtual keyword in base class
    ptr = &gp1;
    ptr->func();
    ptr = &p1;
    ptr->func();
    ptr = &c1;
    ptr->func();

    return 0;
}
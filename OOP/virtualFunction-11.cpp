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
    void func1() const
    {
        cout << "called function 1 of parent class" << endl;
    }

    virtual void func2() const
    {
        cout << "called virtual function 2 of parent class" << endl;
    }

    virtual void func3() const
    {
        cout << "called virtual function 3 of parent class" << endl;
    }

    void func4() const
    {
        cout << "called function 4 of parent class" << endl;
    }
};

class Child : public Parent
{
public:
    void func1() const
    {
        cout << "called function 1 of child class" << endl;
    }

    void func2() const
    {
        cout << "called virtual function 2 of child class" << endl;
    }
};

int main()
{
    Child c1;
    // declared a pointer of type Parent
    Parent *ptr;
    // pointed the pointer to object of child class

    ptr = &c1;
    // func1() function call, base class version of function is called
    ptr->func1();
    // func2() is overridden in derived class so derived class version is called
    ptr->func2();
    // func3() is not overridden in derived class and is virtual function so base class version is called
    ptr->func3();
    // func4() is not overridden so base class version is called
    ptr->func4();
    return 0;
}
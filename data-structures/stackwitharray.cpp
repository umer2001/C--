#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

#define MAX 5 //max size for stack

/*----------------------------------Class Definations------------------------------------*/
class Stack
{
protected:
    int top, arr[MAX];

public:
    Stack()
    {
        top = -1;
    }

    void push(int item)
    {
        if (top < MAX - 1)
        {
            top++;
            arr[top] = item;
        }
        else
        {
            cout << "error: cant push stack overflowed.." << endl;
        }
    }

    int pop()
    {
        if (top >= 0)
        {
            top--;
            return arr[top + 1];
        }
        else
        {
            cout << "error: cant pop stack underflowed.. OR stack empty" << endl;
            return 404;
        }
    }

    int peek()
    {
        if ((top >= 0) && (top < MAX))
        {
            return arr[top];
        }
        else
        {
            cout << "error: cant peek stack underflowed.. OR stack empty" << endl;
        }
    }

    void display()
    {
        cout << "\n";
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << "\t";
        }
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};

int main()
{
    Stack a = Stack();
    cout << "\nempty ? : " << a.isEmpty() << endl;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(6);

    a.display();
    cout << "\nempty ? : " << a.isEmpty() << endl;
    cout << "\npopped : " << a.pop() << endl;
    cout << "peek : " << a.peek() << endl;
    cout << "\npopped : " << a.pop() << endl;
    cout << "peek : " << a.peek() << endl;
    cout << "\npopped : " << a.pop() << endl;
    cout << "peek : " << a.peek() << endl;
    cout << "\npopped : " << a.pop() << endl;
    cout << "peek : " << a.peek() << endl;
    cout << "\npopped : " << a.pop() << endl;
    cout << "peek : " << a.peek() << endl;
    cout << "\npopped : " << a.pop() << endl;
    cout << "peek : " << a.peek() << endl;
    a.display();
    // Test cases
    cout << "MANUAL TESTS" << endl;
    Stack stack = Stack();
    int X = 4;
    int Z = 0;
    int Y = X + 1;
    stack.push(Y);
    stack.push(Y + 1);
    stack.push(X);
    stack.pop();
    X = Y + 1;
    stack.push(X);
    stack.push(Z);
    /* empty ( ) is a function to test for empty stack */
    while (!stack.isEmpty())
    {
        cout << stack.pop() << endl;
    }
    cout << "X = " << X << endl;
    cout << "Y = " << Y << endl;
    cout << "Z = " << Z << endl;

    return 0;
}
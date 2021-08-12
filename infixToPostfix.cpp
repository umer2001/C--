#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

#define MAX 100 //max size for stack

/*----------------------------------Class Definations------------------------------------*/
class Stack
{
protected:
    int top;
    char arr[MAX];

public:
    Stack()
    {
        top = -1;
    }

    void push(char item)
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

    char pop()
    {
        if (top >= 0)
        {
            top--;
            return arr[top + 1];
        }
        else
        {
            cout << "error: cant pop stack underflowed.. OR stack empty" << endl;
            return '!';
        }
    }

    char peek()
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

/*--------------------------------Function Definations------------------------------------*/
int precedenceOf(char cherecter)
{
    char operators[11] = {'-', '+', '/', '*', '^', '[', ']', '{', '}', '(', ')'};
    for (int i = 0; i < 11; i++)
    {
        if (cherecter == operators[i])
        {
            if (i <= 1)
            {
                return 0;
            }
            else if (i >= 2 && i <= 3)
            {
                return 1;
            }
            else if (i == 4)
            {
                return 2;
            }
            else
            {
                return 5;
            }
        }
    }
    return -1;
}
bool isLeftToRight(int precedence)
{
    if (precedence == 2)
    {
        return false;
    }
    else
    {
        return true;
    }
}
string infixToPostfix(string infixExpresion)
{
    int size = infixExpresion.size();
    Stack stack = Stack();
    string postFixExpression = "";
    for (int i = 0; i < size; i++)
    {

        if (
            (infixExpresion[i] >= 65 && infixExpresion[i] <= 90) ||
            (infixExpresion[i] >= 97 && infixExpresion[i] <= 122))
        {
            postFixExpression += infixExpresion[i];
        }
        else
        {
            const int precedenceOfCurrentChar = precedenceOf(infixExpresion[i]);
            if (stack.isEmpty() || infixExpresion[i] == '(' || stack.peek() == '(')
            {
                stack.push(infixExpresion[i]);
            }
            else
            {
                if (infixExpresion[i] == ')')
                {
                    while (stack.peek() != '(' && !stack.isEmpty())
                    {
                        postFixExpression += stack.pop();
                    }
                    stack.pop();
                }
                else if (precedenceOfCurrentChar == precedenceOf(stack.peek()))
                {
                    // check associativity
                    if (isLeftToRight(precedenceOfCurrentChar))
                    {
                        postFixExpression += stack.pop();
                        stack.push(infixExpresion[i]);
                    }
                    else
                    {
                        stack.push(infixExpresion[i]);
                    }
                }
                else
                {
                    if (precedenceOfCurrentChar > precedenceOf(stack.peek()))
                    {
                        // do some thing
                        stack.push(infixExpresion[i]);
                    }
                    else
                    {
                        while (precedenceOfCurrentChar < precedenceOf(stack.peek()) && !stack.isEmpty())
                        {
                            postFixExpression += stack.pop();
                        }
                        if (precedenceOfCurrentChar == precedenceOf(stack.peek()))
                        {
                            // check associativity
                            if (isLeftToRight(precedenceOfCurrentChar))
                            {
                                postFixExpression += stack.pop();
                                stack.push(infixExpresion[i]);
                            }
                            else
                            {
                                stack.push(infixExpresion[i]);
                            }
                        }
                        else
                        {
                            stack.push(infixExpresion[i]);
                        }
                    }
                }
            }
        }
    }
    while (!stack.isEmpty())
    {
        postFixExpression += stack.pop();
    }

    return postFixExpression;
}

// TODO: comple the function below
int evaluatePostfix(string postfixExpression)
{
    Stack stack;

    for (int i = 0; i < postfixExpression.size(); i++)
    {
        if ((postfixExpression[i] >= 65 && postfixExpression[i] <= 90) ||
            (postfixExpression[i] >= 97 && postfixExpression[i] <= 122))
        {
            stack.push(postfixExpression[i]);
        }
        else
        {
            char a = stack.pop();
            char b = stack.pop();
            cout << "infix : " << b << postfixExpression[i] << a << endl;
        }
    }
    return 0;
}

int main()
{

    // Test cases
    string exp = "K+L-M*N+(O^P)*W/U/V*T+Q";
    evaluatePostfix(infixToPostfix(exp));

    return 0;
}
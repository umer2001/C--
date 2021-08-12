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
    string arr[MAX];

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
            string s(1, item);
            arr[top] = s;
        }
        else
        {
            cout << "error: cant push stack overflowed.." << endl;
        }
    }

    void push(string item)
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

    string pop()
    {
        if (top >= 0)
        {
            top--;
            return arr[top + 1];
        }
        else
        {
            cout << "error: cant pop stack underflowed.. OR stack empty" << endl;
            return "!";
        }
    }

    string peek()
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
        // if alphabets or numbers, add to result string
        if (
            (infixExpresion[i] >= 48 && infixExpresion[i] <= 57) ||
            (infixExpresion[i] >= 65 && infixExpresion[i] <= 90) ||
            (infixExpresion[i] >= 97 && infixExpresion[i] <= 122))
        {
            postFixExpression += infixExpresion[i];
        }
        else
        {
            // find the precedence Of the current operator
            const int precedenceOfCurrentChar = precedenceOf(infixExpresion[i]);
            // if stack is empty
            // OR current operator is (
            // OR last element pushed was (,
            // Then push the current operator
            if (stack.isEmpty() || infixExpresion[i] == '(' || stack.peek().at(0) == '(')
            {
                stack.push(infixExpresion[i]);
            }
            else
            {
                //  if current operator is ),
                // Then pop all operators & add them to result string untill ( is in top of stack
                if (infixExpresion[i] == ')')
                {
                    while (stack.peek().at(0) != '(' && !stack.isEmpty())
                    {
                        postFixExpression += stack.pop();
                    }
                    stack.pop();
                }
                // if the predence of current operator is equal to predence of operator on top of the stack,
                // check associativity
                else if (precedenceOfCurrentChar == precedenceOf(stack.peek().at(0)))
                {
                    // if associativity is left to right
                    // pop one operator and add it to result string & push the current operator
                    if (isLeftToRight(precedenceOfCurrentChar))
                    {
                        postFixExpression += stack.pop();
                        stack.push(infixExpresion[i]);
                    }
                    // else just push the current operator
                    else
                    {
                        stack.push(infixExpresion[i]);
                    }
                }
                else
                {
                    // if the predence of current operator is greater than predence of operator on top of the stack,
                    // just push the current operator
                    if (precedenceOfCurrentChar > precedenceOf(stack.peek().at(0)))
                    {
                        stack.push(infixExpresion[i]);
                    }
                    else
                    {
                        // while the predence of current operator is less than predence of operator on top of the stack,
                        // just keep poping operator & adding to result string
                        while (precedenceOfCurrentChar < precedenceOf(stack.peek().at(0)) && !stack.isEmpty())
                        {
                            postFixExpression += stack.pop();
                        }
                        // if the predence of current operator is equial to precedence of new top of stack
                        // check associativity
                        if (precedenceOfCurrentChar == precedenceOf(stack.peek().at(0)))
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
                        // else just push the current operator into stack
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

string evaluatePostfix(string postfixExpression)
{
    Stack stack;

    for (int i = 0; i < postfixExpression.size(); i++)
    {
        if (
            (postfixExpression[i] >= 48 && postfixExpression[i] <= 57) ||
            (postfixExpression[i] >= 65 && postfixExpression[i] <= 90) ||
            (postfixExpression[i] >= 97 && postfixExpression[i] <= 122))
        {
            stack.push(postfixExpression[i]);
        }
        else
        {

            string a = stack.pop();
            string b = stack.pop();
            try
            {
                int aa = stoi(a);
                int bb = stoi(b);

                switch (postfixExpression[i])
                {
                case '+':
                    stack.push(to_string(bb + aa));
                    break;
                case '-':
                    stack.push(to_string(bb - aa));
                    break;
                case '/':
                    stack.push(to_string(bb / aa));
                    break;
                case '*':
                    stack.push(to_string(bb * aa));
                    break;
                case '^':
                    stack.push(to_string(pow(bb, aa)));
                    break;

                default:
                    break;
                }
            }
            catch (std::invalid_argument &e)
            {
                stack.push(b + postfixExpression[i] + a);
                cout << "infix : " << b << postfixExpression[i] << a << endl;
            }
        }
    }
    return stack.peek();
}

int main()
{

    // Test cases
    string exp = "K+L-M*N+(O^P)*W/U/V*T+Q";
    evaluatePostfix(infixToPostfix(exp));

    exp = "1+3+(4/2)";
    cout << "postfix : " << infixToPostfix(exp) << endl;
    cout << "value : " << evaluatePostfix(infixToPostfix(exp));

    return 0;
}
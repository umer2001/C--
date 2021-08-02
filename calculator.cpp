#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
/*----------------------------------Function Declaration------------------------------------*/
void add();
void sub();
void mul();
void div();
//Scientific functions
void sint();
void cost();
void tant();
void cosect();
void sect();
void cott();
void fact();
void logs();
void expon();
void sqroot();
/*----------------------------------Function Definations------------------------------------*/

void add()
{
    float a, b;
    cout << "\t\t\t\tEnter first Number : ";
    cin >> a;
    cout << "\t\t\t\tEnter second Number : ";
    cin >> b;
    cout << "\t\t\t\tResult : " << a + b;
}

void sub()
{
    float a, b;
    cout << "\t\t\t\tEnter first Number : ";
    cin >> a;
    cout << "\t\t\t\tEnter second Number : ";
    cin >> b;
    cout << "\t\t\t\tResult : " << a - b;
}

void mul()
{
    float a, b;
    cout << "\t\t\t\tEnter first Number : ";
    cin >> a;
    cout << "\t\t\t\tEnter second Number : ";
    cin >> b;
    cout << "\t\t\t\tResult : " << a * b;
}

void div()
{
    float a, b;
    cout << "\t\t\t\tEnter Dividend : ";
    cin >> a;
    cout << "\t\t\t\tEnter Divisor : ";
    cin >> b;
    cout << "\t\t\t\tResult : " << a / b;
}
//Scientific functions

void sint()
{
    double a, b;
    cout << "\t\t\t\tEnter Angle in degree : ";
    cin >> a;
    b = a * (3.142 / 180);
    cout << "\t\t\t\tResult : " << sin(b);
}

void cost()
{
    double a, b;
    cout << "\t\t\t\tEnter Angle in degree : ";
    cin >> a;
    b = a * (3.142 / 180);
    cout << "\t\t\t\tResult : " << cos(b);
}

void tant()
{
    double a, b;
    cout << "\t\t\t\tEnter Angle in degree : ";
    cin >> a;
    b = a * (3.142 / 180);
    cout << "\t\t\t\tResult : " << tan(b);
}

void cosect()
{
    double a, b;
    cout << "\t\t\t\tEnter Angle in degree : ";
    cin >> a;
    b = a * (3.142 / 180);
    cout << "\t\t\t\tResult : " << 1 / sin(b);
}

void sect()
{
    double a, b;
    cout << "\t\t\t\tEnter Angle in degree : ";
    cin >> a;
    b = a * (3.142 / 180);
    cout << "\t\t\t\tResult : " << 1 / cos(b);
}

void cott()
{
    double a, b;
    cout << "\t\t\t\tEnter Angle in degree : ";
    cin >> a;
    b = a * (3.142 / 180);
    cout << "\t\t\t\tResult : " << 1 / tan(b);
}

void fact()
{
    int a, i, fact = 1;

    cout << "\t\t\t\tEnter a number for factorial : ";
    cin >> a;

    for (i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    cout << "\t\t\t\tResult : " << fact;
}

void logs()
{
    double a;
    cout << "\t\t\t\tEnter the Number : ";
    cin >> a;
    cout << "\t\t\t\tResult : " << log10(a);
}

void expon()
{
    double a, b;
    cout << "\t\t\t\tEnter the Number : ";
    cin >> a;
    cout << "\t\t\t\tEnter the Exponent : ";
    cin >> b;
    cout << "\t\t\t\tResult : " << pow(a, b);
}

void sqroot()
{
    double a;
    cout << "\t\t\t\tEnter the Number : ";
    cin >> a;
    cout << "\t\t\t\tResult : " << sqrt(a);
}

int main()
{
    char op, se, ch;
    do
    {
        cout << "\n\t\t\t\tPROGRAM FOR A CALCULATOR";
        cout << "\n\t\t\tEnter \"a\" for Arthimatic Calculations and \"s\" for scientific Calculations : ";
        cin >> se;
        if (se == 'a' || se == 'A')
        {
            cout << "\t\t\t\tArthimatic calulator" << endl;
            cout << "\t\t\t\tEnter +,-,* or / for respective operation : ";
            cin >> op;
            switch (op)
            {
            case '+':
                add();
                break;

            case '-':
                sub();
                break;

            case '*':
                mul();
                break;

            case '/':
                div();
                break;

            default:
                cout << "Not a good choice !!!";
                break;
            }
        }
        else if (se == 's' || se == 'S')
        {
            cout << "\t\t\t\tScientific calulator" << endl;
            cout << "\t\t\t\tEnter \"f\" for factorial,\n\t\t\t\t \"s\" for sin, \"c\" for cos, \"t\" for tan\n\t\t\t\t\"y\" for cosec, \"u\" for sec, \"i\" for cot\n\t\t\t\t\"l\" for log\n\t\t\t\t\"x\" for exponent\n\t\t\t\t\"r\" for square root  : ";
            cin >> op;
            switch (op)
            {
            case 'f':
                fact();
                break;

            case 's':
                sint();
                break;

            case 'c':
                cost();
                break;

            case 't':
                tant();
                break;
            case 'y':
                cosect();
                break;

            case 'u':
                sect();
                break;

            case 'i':
                cott();
                break;

            case 'l':
                logs();
                break;

            case 'x':
                expon();
                break;

            case 'r':
                sqroot();
                break;

            default:
                cout << "Not a good choice !!!";
                break;
            }
        }
        else
        {
            cout << "\t\t\t\tSelection is not valid !!";
        }
        cout << "\n\t\t\t\tEnter \"y\" to RUN again : ";
        ch = getche();
    } while (ch == 'y' || ch == 'Y');

    getche();
}
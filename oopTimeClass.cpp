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

class Time
{
private:
    int hours, minutes, seconds;

public:
    Time()
    {
        hours = minutes = seconds = 0;
    }

    Time(int h, int m, int s)
    {
        if (m <= 60 && s <= 60)
        {
            hours = h;
            minutes = m;
            seconds = s;
        }
        else
        {
            throw "problem in initialization";
        }
    }

    void display() const
    {
        cout << "Time : " << hours << ":" << minutes << ":" << seconds;
    }

    void add(Time t1, Time t2)
    {
        hours = t1.hours + t2.hours;
        minutes = t1.minutes + t2.minutes;
        seconds = t1.seconds + t2.seconds;

        if (seconds > 60)
        {
            minutes += seconds / 60;
            seconds = seconds % 60;
        }

        if (minutes > 60)
        {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    }
};

int main()
{
    const Time t2(12, 40, 25), t3(10, 24, 60);
    Time total;

    cout << "Before Addition Total ";
    total.display();
    total.add(t2, t3);
    cout << "\nAfter Addition Total ";
    total.display();
}

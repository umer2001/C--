#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
/*----------------------------------Function Declaration------------------------------------*/
int indexOf(string, string[]);
int completeMonth(int, int, bool);
float completeYear(int, bool);
int completeAllYears(int);
int aliveDays(int, int, int);
/*--------------------------------Function Definations------------------------------------*/
int indexOf(string month, string months[13])
{
    for (int i = 1; i < 13; i++)
    {
        if (month == months[i])
        {
            return i;
        }
        else
        {
            continue;
        }
    }
}
int completeMonth(int month, int date, bool isLeap)
{
    if (month % 2 == 0 && month != 2)
    {
        //30
        return 30 - date;
    }
    else if (month == 2)
    {
        if (isLeap)
        {
            return 29 - date;
        }
        else
        {
            return 28 - date;
        }
    }
    else
    {
        //31
        return 31 - date;
    }
}
float completeYear(int month, bool isLeap)
{
    if (isLeap)
    {
        return (12 - month) * 30.5;
    }
    else
    {
        return (12 - month) * 30.41;
    }
}
int completeAllYears(int year)
{
    time_t my_time = time(NULL);
    string time = ctime(&my_time);
    int totalYears = (stoi(time.substr(20, 4)) - 1) - year;
    int leaps = totalYears / 4;
    int normals = totalYears - leaps;
    return ((leaps * 366) + (normals * 365));
}
int aliveDays(int date, int month, int year)
{
    string months[13] = {
        "",
        "Jan",
        "Feb",
        "Mar",
        "Apr",
        "May",
        "Jun",
        "Jul",
        "Aug",
        "Sep",
        "Oct",
        "Nov",
        "Dec"};
    time_t my_time = time(NULL);
    string time = ctime(&my_time);
    bool isleap;
    (year % 4 == 0) ? isleap = true : isleap = false;
    return round(completeAllYears(year) +
                 completeYear(month, isleap) +
                 completeMonth(month, date, isleap) +
                 (((indexOf(time.substr(4, 3), months) - 1) * 30.41) +
                  stoi(time.substr(8, 2))));
}

int main()
{

    string dateOfBirth;
    time_t my_time = time(NULL);
    string time = ctime(&my_time);
    string months[13] = {
        "",
        "Jan",
        "Feb",
        "Mar",
        "Apr",
        "May",
        "Jun",
        "Jul",
        "Aug",
        "Sep",
        "Oct",
        "Nov",
        "Dec"};
    int year, month, date;
    char again;
    do
    {
        system("CLS");
        cout << "\n\t\t\t\t\t  ///////////////////////////////////////\n"
             << "\t\t\t\t\t // Days You Have Been Alive On Earth //\n"
             << "\t\t\t\t\t///////////////////////////////////////\n\n";
        cout << "\n\n\n\t\t\t\tEnter date of birth in the following formet : yyyy/mm/dd";
        cout << "\n\n\n\t\t\t\t=>\t\tEnter date of birth : ";
        cin >> dateOfBirth;

        year = stoi(dateOfBirth.substr(0, 4));
        month = stoi(dateOfBirth.substr(5, 2));
        date = stoi(dateOfBirth.substr(8, 2));

        if (dateOfBirth.size() == 10)
        {
            if (dateOfBirth.substr(0, 4) <= time.substr(20, 4) && month <= 12 && date <= 31)
            {
                if (dateOfBirth.substr(0, 4) == time.substr(20, 4))
                {
                    if (month <= indexOf(time.substr(4, 3), months))
                    {
                        if (month == indexOf(time.substr(4, 3), months))
                        {
                            if (date <= stoi(time.substr(8, 2)))
                            {
                                cout << "\n\t\t\t\t=>\t\tDays you have been alive : " << aliveDays(date, month, year);
                            }
                            else
                            {
                                cout << "\n\t\t\t\t !!\t\tYou aren't borned yet...";
                            }
                        }
                        else
                        {
                            cout << "\n\t\t\t\t=>\t\tDays you have been alive : " << aliveDays(date, month, year);
                        }
                    }
                    else
                    {
                        cout << "\n\t\t\t\t !!\t\tYou aren't borned yet...";
                    }
                }
                else
                {
                    cout << "\n\t\t\t\t=>\t\tDays you have been alive : " << aliveDays(date, month, year);
                }
            }
            else
            {
                cout << "\n\t\t\t\t !!\t\tDon't try to fool me...";
            }
        }
        else
        {
            cout << "\n\t\t\t\t !!\t\tLength of date of birth is incorrect.";
        }
        cout << "\n\n\t\t\t\tDo you want to calculate days again ?, Enter 'Y' for yes : ";
        again = getche();
    } while (again == 'y' || again == 'Y');

    getch();
}
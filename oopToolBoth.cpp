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

class toolBooth
{
private:
    unsigned int numberOfCars;
    double totalMoney;

public:
    toolBooth() : numberOfCars(0), totalMoney(0) {}

    void payingCar()
    {
        totalMoney += 0.5;
        numberOfCars += 1;
    }

    void noPayCar()
    {
        numberOfCars += 1;
    }

    void display() const
    {
        cout << "\n\t\t\tTotal cars passed : " << numberOfCars
             << "\n\t\t\tTotal paying cars : " << totalMoney / 0.5
             << "\n\t\t\tTotal Non paying cars : " << numberOfCars - totalMoney / 0.5
             << "\n\t\t\tTotal money collected : $" << totalMoney;
    }
};

int main()
{
    char a;
    toolBooth NH1;

    cout << "\n\n\t\t\t National Highway 1 toolBooth software" << endl;
    cout << "\n\t\t just press \"P\" for paying car ,\"N\" for non paying car & \"Esc\" to exit" << endl;
    cout << "\t\t==> ";
    do
    {
        a = getche();
        if (a == 'p' || a == 'P')
        {
            NH1.payingCar();
        }
        if (a == 'n' || a == 'N')
        {
            NH1.noPayCar();
        }
    } while (a != 27);

    NH1.display();
}

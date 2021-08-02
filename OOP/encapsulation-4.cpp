#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;
/*----------------------------------Function Declaration------------------------------------*/

/*--------------------------------Function Definations------------------------------------*/

/*--------------------------------Class Definations------------------------------------*/

class Student
{
    // private hidden data
private:
    string name, rollNumber, department;

public:
    string getName()
    {
        return name;
    }
    void setName(string uName)
    {
        name = uName;
    }

    string getRollNumber()
    {
        return rollNumber;
    }
    void setRollNumber(string uRollNumber)
    {
        rollNumber = uRollNumber;
    }

    string getDepartment()
    {
        return department;
    }
    void setDepartment(string uDepartment)
    {
        department = uDepartment;
    }
};

int main()
{
    Student Imran;
    Imran.setName("Imran Ali");
    Imran.setRollNumber("BS-12");
    Imran.setDepartment("Computer Science");

    //  data can only be accessed by the member functions
    cout << Imran.getName() << endl;
    cout << Imran.getRollNumber() << endl;
    cout << Imran.getDepartment() << endl;

    return 0;
}
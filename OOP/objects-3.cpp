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
private:
    string name, rollNumber, department;

    // member functions
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
    // creating objects
    Student Imran;
    // using objects & member functions
    Imran.setName("Imran Ali");
    Imran.setRollNumber("BS-12");
    Imran.setDepartment("Computer Science");

    cout << Imran.getName() << endl;
    cout << Imran.getRollNumber() << endl;
    cout << Imran.getDepartment() << endl;
    return 0;
}
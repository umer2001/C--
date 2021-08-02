#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;
/*----------------------------------Function Declaration------------------------------------*/

/*--------------------------------Function Definations------------------------------------*/

/*--------------------------------Class Definations------------------------------------*/

class Person
{
protected:
    string name, gender;
    int age;

public:
    Person(string personName, int personAge, string personGender)
    {
        name = personName;
        age = personAge;
        gender = personGender;
    }
};

class Teacher : public Person
{
private:
    string subject;
    int salary;

public:
    Teacher(string teacherName, int teacherAge, string teacherGender, string teacherSubject, int teacherSalary) : Person(teacherName, teacherAge, teacherGender)
    {
        subject = teacherSubject;
        salary = teacherSalary;
    }

    void displayTeacherInfo() const
    {
        cout << "Teachers info" << endl;
        cout << "Teachers name : " << name << endl;
        cout << "Teachers subject : " << subject << endl;
        cout << "Teachers salary : " << salary << endl;
        cout << "Teachers gender : " << gender << endl;
        cout << "Teachers age : " << age << endl;
    }
};

int main()
{
    Teacher haroon("Haroon", 45, "Male", "Maths", 50000);

    haroon.displayTeacherInfo();
    return 0;
}
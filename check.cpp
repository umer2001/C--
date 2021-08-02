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

class Publication
{
protected:
	string title;
	float price;

public:
	Publication()
	{
		cout << "parent constructor" << endl;
	}

	~Publication()
	{
		cout << "parent destructor" << endl;
	}

	void getData()
	{
		cout << "Enter name of publication : ";
		cin >> title;
		cout << "Enter price of publication : ";
		cin >> price;
	}

	void putData() const
	{
		cout << "Name of publication : " << title << endl;
		cout << "Price of publication : " << price << endl;
	}
};

class Sales
{
private:
	float slaeOfLastThreeMonths[3];

protected:
	void getData()
	{
		cout << "Enter sales of 3rd last month : ";
		cin >> slaeOfLastThreeMonths[0];
		cout << "Enter sales of 2nd last month : ";
		cin >> slaeOfLastThreeMonths[1];
		cout << "Enter sales of last month : ";
		cin >> slaeOfLastThreeMonths[2];
	}

	void putData() const
	{
		cout << "Sales of 3rd last month : " << slaeOfLastThreeMonths[0] << endl;
		cout << "Sales of 2nd last month : " << slaeOfLastThreeMonths[1] << endl;
		cout << "Sales of last month : " << slaeOfLastThreeMonths[2] << endl;
	}
};

class Book : public Publication, public Sales
{
private:
	unsigned int pageCount;

public:
	Book()
	{
		cout << "child constructor" << endl;
	}

	~Book()
	{
		cout << "child destructor" << endl;
	}

	void getData()
	{
		Publication::getData();
		cout << "Enter number of pages of publication : ";
		cin >> pageCount;
		Sales::getData();
	}

	void putData() const
	{
		Publication::putData();
		cout << "Number of pages of publication : " << pageCount << endl;
		Sales::putData();
	}
};

class Tape : public Publication, public Sales
{
private:
	float minutes;

public:
	void getData()
	{
		Publication::getData();
		cout << "Enter listening time in minutes of publication : ";
		cin >> minutes;
		Sales::getData();
	}

	void putData() const
	{
		Publication::putData();
		cout << "Listening minutes of publication : " << minutes << endl;
		Sales::putData();
	}
};

int main()
{
	Book b1;

	return 0;
}
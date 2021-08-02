#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
/*----------------------------------Function Declaration------------------------------------*/

/*--------------------------------Function Definations------------------------------------*/

int main()
{
  string text;
  char charecter;
  int count = 0;
  cout << "\n\n\t\t\t    =>\t"
       << "Program To Calculate Frequency of a charecter in a String";
  cout << "\n\n\n\n\t\t\t     =>\t"
       << "Enter a string : ";
  getline(cin, text);
  cout << "\n\t\t\t     =>\t"
       << "Enter the charecter : ";
  charecter = getche();
  cout << "\n\n\n\n\t\t\t    =>\t"
       << "Result";
  cout << "\n\n\n\t\t\t     =>\t"
       << "Your string : " << text;
  for (int i = 0; i < text.size(); i++)
  {
    if (text[i] == charecter)
    {
      count++;
    }
  }
  cout << "\n\t\t\t     =>\t"
       << "Charecter to calculate frequency : " << charecter;
  cout << "\n\t\t\t     =>\tFrequency of the charecter : " << count;
  getch();
}
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
/*----------------------------------Function Declaration------------------------------------*/

/*--------------------------------Function Definations------------------------------------*/

int main() {
  string text;
  char charecter;
  cout << "\n\n\t\t\t    =>\t"<<"Program To Filter a charecter from a String";
  cout << "\n\n\n\n\t\t\t     =>\t"<<"Enter a string : ";
  getline(cin,text);
  cout << "\n\t\t\t     =>\t"<<"Enter the charecter you want to remove from the string : ";
  charecter = getche();
  cout << "\n\n\n\n\t\t\t    =>\t"<<"Result";
  cout << "\n\n\n\t\t\t     =>\t"<<"Your string : "<<text;
  cout << "\n\t\t\t     =>\t"<<"Charecter to filter : "<<charecter;
  cout << "\n\t\t\t     =>\tFiltered string : ";
  for( int i = 0; i < text.size(); i++ ) {
    if( text[i] != charecter ) {
      cout << text[i];
    }
  }
	getch();
}
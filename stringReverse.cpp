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
  cout << "\n\n\t\t\t    =>\t"<<"Program To Reverse a String : ";
  cout << "\n\n\t\t\t     =>\t"<<"Enter a string : ";
  getline(cin,text);
  cout << "\n\t\t\t     =>\tReversed string : ";
  for( int i = text.size()-1; i >= 0; i-- ) {
    cout << text[i];
  }
	getch();
}
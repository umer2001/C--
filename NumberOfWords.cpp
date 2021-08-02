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
  int count = 1;
  char again;
  do {
	  system("CLS");
	  cout << "\n\n\t\t\t    =>\t"<<"Program To Calculate WORDS in a String";
		cout << "\n\n\n\n\t\t\t     =>\t"<<"Enter a string : ";
		getline(cin,text);
			if( text.empty() ) {
				count = 0;
			}
			else {
				for( int i = 0; i < text.size(); i++ ) {
					if( text[i] == ' ' ) {
					count++;
					}
				}
			} 
		cout << "\n\n\n\n\t\t\t    =>\t"<<"Result";
		cout << "\n\n\n\t\t\t     =>\t"<<"Your string : "<<text;
		cout << "\n\t\t\t     =>\tNumber of words : "<<count;
		cout << "\n\n\t\t\t     =>\tEnter \"Y\" to run again : ";
		again = getche();
  	}
	while( again == 'Y' || again == 'y' );
  
  
	getch();
}
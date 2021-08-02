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
  int upCase, lowCase, SpCase;
  char again;
  do {	  
  	  upCase = lowCase = SpCase = 0;
	  system("CLS");
	  cout << "\n\n\t\t    =>\t"<<"Program To Calculate Upper & Lower case along with Special cherecters in a String";
		cout << "\n\n\n\n\t\t\t     =>\t"<<"Enter a string : ";
		getline(cin,text);	
		for( int i = 0; i < text.size(); i++ ) {
			if( text[i] > 96  ) { lowCase++; }
			else if ( text[i] > 64 ) { upCase++; }
			else { SpCase++; }
			
		} 
		cout << "\n\n\n\n\t\t\t    =>\t"<<"Result";
		cout << "\n\n\n\t\t\t     =>\t"<<"Your string : "<<text;
		cout << "\n\t\t\t     =>\tNumber of Lower Case cherecters : "<<lowCase;
		cout << "\n\t\t\t     =>\tNumber of Upper Case cherecters : "<<upCase;
		cout << "\n\t\t\t     =>\tNumber of Special cherecters : "<<SpCase;
		cout << "\n\n\t\t\t     =>\tEnter \"Y\" to run again : ";
		again = getche();
  	}
	while( again == 'Y' || again == 'y' );
  
  
	getch();
}
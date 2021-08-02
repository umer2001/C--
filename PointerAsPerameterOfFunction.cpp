#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
/*----------------------------------Function Declaration------------------------------------*/
void arradd( int *p1, int *p2 );

/*--------------------------------Function Definations------------------------------------*/
void arrAdd( int *p1, int *p2 ) {
	cout <<"\n\n\t\t\t\tAFTER Addition function : ";
    for(int i = 0; i < 5; i++) {
        cout<<*(p1 + i) + *(p2 + i)<<" ";
    }
}

void arrInput( int a[] ) {
	for(int i = 0; i < 5; i++) {
		cout << "\t\t\t\t\tEnter "<<1+i<<" number : ";
		cin>>a[i];
	}
}

void arrOutput( int a[] ) {
	for(int i = 0; i < 5; i++) {
		cout <<a[i]<<" ";
	}
}

int main() {
	cout << "\n\n\t\t\t\tAddition Of Numbers In An Array"<<endl;
	cout << "\t\t\tUsing A Function That Has pointers as Parameters\n"<<endl;
	int arrA[5], arrB[5];
	cout <<"\n\t\t\t\tEnter Numbers for FIRST Array\n";
	arrInput( arrA );
	cout <<"\n\t\t\t\tEnter Numbers for Second Array\n";
	arrInput( arrB );
	cout <<"\n\t\t\t\tArrays BEFORE Addition function\n";
	cout <<"\n\t\t\t\tFIRST Array : ";
	arrOutput( arrA );
	cout <<"\n\t\t\t\tSECOND Array : ";
	arrOutput( arrB );
	arrAdd(arrA, arrB );
getch();
}
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
/*----------------------------------Function Declaration------------------------------------*/
void arrSqr( int arr[] );

/*--------------------------------Function Definations------------------------------------*/
void arrSqr( int arr[] ) {
    for(int i = 0; i < 5; i++) {
        arr[i] = arr[i]*arr[i];
    }
}

int main() {
	cout << "\n\n\t\t\t\tSqure Of Numbers In An Array"<<endl;
	cout << "\t\t\tUsing A Function That Passes Arguments By Reffreence\n"<<endl;
	int arr[5];
	for(int i = 0; i < 5; i++) {
		cout << "\t\t\t\t\tEnter "<<1+i<<" number : ";
		cin>>arr[i];
	}
	cout <<"\n\t\t\t\tArray BEFORE Square function : ";
	for(int i = 0; i < 5; i++) {
		cout <<arr[i]<<" ";
	}
	arrSqr(arr);
	cout <<"\n\t\t\t\tArray AFTER Square function : ";
	for(int i = 0; i < 5; i++) {
		cout <<arr[i]<<" ";
	}
	cout<<"\n\t\t\tThus it proves that array is pass by refference by default.";
getch();
}
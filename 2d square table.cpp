#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;


int main() {

    int i,j,number;

    cout<<"\n\n\t\t\t\t\t\tPROGRAM FOR 2D TABLES";
    cout<<"\n\n\t\t\t\t\tEnter a number for max table : ";
    cin>>number;

        for( i=1; i <= number; i++) {
            cout<<"\n\t\t\t\t\t";
            for( j = 1; j <= number; j++) {
                cout<<setw(5)<<i*j;
            }
        }
   
    getche();
}
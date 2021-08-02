#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;


int main() {

    int num=50,i=1,j,count=1,number;

    cout<<"\n\n\t\t\t\t\t\tPROGRAM FOR NUMBER TRIANGLE";
    cout<<"\n\n\t\t\t\t\tEnter a number for the end of triangle : ";
    cin>>number;

   while( i <= num && count <= number) {
       cout<<"\n\t\t\t\t\t";
       for( j = 1; j <= i; j++) {
           cout<<" "<<count; 
            count++;   
        }
        i++;
   }
   /*  for( i=1; i <= num; i++) {
            cout<<"\n";
            for( j = 1; j <= i; j++) {
                cout<<" "<<count;
                count++;
            }
        }
    */
    getche();
}
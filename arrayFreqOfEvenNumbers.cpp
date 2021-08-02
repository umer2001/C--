#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
/*----------------------------------Function Declaration------------------------------------*/

/*----------------------------------Function Definations------------------------------------*/


int main() {
    int arr[5],i,counter=0;
    cout<<"\n\n\t\t\t\tFREQUENCY OF EVEN NUMBERS IN AN ARRAY\n"<<endl;
    for( i = 0; i < 5; i++) {
        cout<<"\t\t\t\tEnter "<<i+1<<" number :";
        cin>>arr[i];
        if( arr[i]%2 == 0 ) {
            counter++;
        }
    }
    cout<<"\n\t\t\t\tFrequency of even numbers : "<<counter;
    getche();
}
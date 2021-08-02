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
    int arr[5],i;
    cout<<"\t\t\t\t5 INTEGERS IN AND OUT OF ARRAY"<<endl;
    for( i = 0; i < 5; i++) {
        cout<<"\t\t\t\tEnter "<<i+1<<" number :";
        cin>>arr[i];
    }
    cout<<"\t\t\t\tOUT IN REVERSE ORDER"<<endl;
    for( i = 4; i >= 0; i--) {
        cout<<"\t\t\t\t=>"<<arr[i]<<endl;
    }
    getche();
}
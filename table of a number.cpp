#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;


int main() {

    int num,i,range=10;

    cout<< "\n\n\t\t\t    =>\t"<<"Enter a number for a table : ";
    cin>>num;

    for( i=1; i <= range; i++) {
        cout<< "\t\t\t\t\t"<<num<<" x "<<i<<" = "<<num*i<<endl;
    }

    getche();
}
#include <conio.h>
#include <math.h>
#include <iostream>
using namespace std;


int main() {

    int num,i,fact=1;

    cout<< "\n\n\t\t\t    =>\t"<<"Enter a number for factorial : ";
    cin>>num;

    for( i=1; i <= num; i++) {
        fact = fact*i;
    }
    cout<< "\n\t\t\t    =>\t"<<fact;
    getche();
}
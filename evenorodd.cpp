#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int number;
    cout<<"\n\n\t\t\t\t\t\tPROGRAM FOR EVEN OR ODD";
    cout<<"\n\n\t\t\t\t\tEnter a number : ";
    cin>>number;
    if(number%2==0) {
        cout<<"\n\t\t\t\t\t"<<number<<" is even number.";
    }
    else {
        cout<<"\n\t\t\t\t\t"<<number<<" is odd number.";
    }
    getche();
}
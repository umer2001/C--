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
    int i;
    char ch;
    
    cout<<"\n\t\t\t\tPROGRAM FOR A ASCII VALUES AND CHARACTERS"<<endl;
    cout<<"ASCII value     ASCII characters"<<endl;
    for( i = 0; i <= 255; i++) {
        ch = i;
        cout<<"\t"<<i<<"    ---->    "<<ch<<endl;
    }
    getche();
}
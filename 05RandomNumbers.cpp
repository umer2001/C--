#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int i;
    time_t my_time = time(NULL);
    string time = ctime(&my_time);
    string a,b,c,d,e,f,g,h ;
    a += time[8];
    b += time[9];
    c += time[11];
    d += time[12];
    e += time[14];
    f += time[15];
    g += time[17];
    h += time[18];
    string dat = a + b ;
    string hou = c + d;
    string min =  e + f;
    string sc = g + h ;
    int date = stoi(dat);
    int hour = stoi(hou);
    int minu = stoi(min);
    int sec= stoi(sc);
    /*
        cout<<ctime(&my_time);
        cout<<"second : "<<sec<<endl;
        cout<<"hour : "<<hour<<endl;
        cout<<"min : "<<min<<endl;
        cout<<"date : "<<date<<endl;
    */
   cout<<"\n\t\t\t\t5 Random Numbers"<<endl;
    for(i =1 ; i <= 5; i++) {
        int ran = (date + sec + (i*hour/2) + minu/4)/i;
        cout<<"\n\t\t\t\t"<<i<<"   =>\t"<<ran<<endl;
    }
   
    getche();
}
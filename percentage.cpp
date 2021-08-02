#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    float math,physics,computer,total,percentage;
    int totale=100;
        cout<<"\n\n\t\t\t=>\tPROGRAM FOR CALCULATING PERCENTAGE\t<=";
        cout<<"\n\n\t\t\t    =>\tEnter obtained marks for math : ";
    cin>>math;
        cout<<"\n\t\t\t    =>\tEnter obtained marks for physics : ";
    cin>>physics;
        cout<<"\n\t\t\t    =>\tEnter obtained marks for computer science : ";
    cin>>computer;
    if(math<=totale && physics<=totale && computer<=totale){
        total=math+physics+computer;
        cout<<"\n\t\t\t    =>\tTotal Obtaied marks : "<<total;
        percentage=(total/300)*100;
        cout<<"\n\t\t\t    =>\tYour Percentage : "<<percentage<<"%";
        if(percentage>=80) {
            cout<<"\n\t\t\t    =>\tRemarks : Excellent";
        }
        else if(percentage>=70) {
            cout<<"\n\t\t\t    =>\tRemarks : Good";
        }
        else if(percentage>=60) {
            cout<<"\n\t\t\t    =>\tRemarks : Welldone";
        }
        else if(percentage>=50) {
            cout<<"\n\t\t\t    =>\tRemarks : Satisfactory";
        }
        else {
            cout<<"\n\t\t\t    =>\tRemarks : FAIL !!";
        }
    }
    else{
        cout<<"\n\t\t\t\t---- Marks are not entered correctly ----";
    }
    getche();
}
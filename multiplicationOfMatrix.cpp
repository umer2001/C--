#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
/*----------------------------------Function Declaration------------------------------------*/
/*----------------------------------Function Definations------------------------------------*/
int main() {
    int mul=1,sum=0;
    int mat[3][3],mat2[3][3];
    cout<<"\n\n\t\t\t\t\t\tPROGRAM FOR TRANSPOSE OF A MATRIX"<<endl;
    cout<<"\n\t\t\t\t\t\tMATRIX A";
    for( int i = 0; i < 3; i++ ) {
        cout<<"\n\t\t\t\t\tEnter elements of "<<i+1<<" row"<<endl;
        for( int j = 0; j < 3; j++ ) {
            cout<<"\t\t\t\t\tEnter elements of "<<j+1<<" column\n\t\t\t\t\t";
            cin>>mat[i][j];
        }
    }
    cout<<"\n\t\t\t\t\t\tMATRIX B";
    for( int i = 0; i < 3; i++ ) {
        cout<<"\n\t\t\t\t\tEnter elements of "<<i+1<<" row"<<endl;
        for( int j = 0; j < 3; j++ ) {
            cout<<"\t\t\t\t\tEnter elements of "<<j+1<<" column\n\t\t\t\t\t";
            cin>>mat2[i][j];
        }
    }
    cout<<"\t\t\t\t\tMatrix A is :\n\t\t\t\t\t";
    for( int i = 0; i < 3; i++ ) {
        for( int j = 0; j < 3; j++ ) {
            cout<<setw(8)<<mat[i][j];
        }
        cout<<"\n\t\t\t\t\t";
    }
    cout<<"Batrix B is :\n\t\t\t\t\t";
    for( int i = 0; i < 3; i++ ) {
        for( int j = 0; j < 3; j++ ) {
            cout<<setw(8)<<mat2[i][j];
        }
        cout<<"\n\t\t\t\t\t";
    }
    cout<<"Result is :\n\t\t\t\t\t";
    for( int i = 0; i < 3; i++ ) {        
        for( int j = 0; j < 3; j++ ){
            cout<<setw(8)<<(mat[i][0]*mat2[0][j])+(mat[i][1]*mat2[1][j])+(mat[i][2]*mat2[2][j]);
        }
        cout<<"\n\t\t\t\t\t";
    }
    getche();
}
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

    int mat[3][3];
    cout<<"\n\n\t\t\t\t\t\tPROGRAM FOR TRANSPOSE OF A MATRIX";
    for( int i = 0; i < 3; i++ ) {
        cout<<"\n\t\t\t\t\tEnter elements of "<<i+1<<" row"<<endl;
        for( int j = 0; j < 3; j++ ) {
            cout<<"\t\t\t\t\tEnter elements of "<<j+1<<" column\n\t\t\t\t\t";
            cin>>mat[i][j];
        }
    }
    cout<<"\t\t\t\t\tEntered Matrix is :\n\t\t\t\t\t";
    for( int i = 0; i < 3; i++ ) {
        for( int j = 0; j < 3; j++ ) {
            cout<<setw(8)<<mat[i][j];
        }
        cout<<"\n\t\t\t\t\t";
    }
    cout<<"Transpose of the matrix is :\n\t\t\t\t\t";
    for( int i = 0; i < 3; i++ ) {
        for( int j = 0; j < 3; j++ ) {
            cout<<setw(8)<<mat[j][i];
        }
        cout<<"\n\t\t\t\t\t";
    }
    getche();
}
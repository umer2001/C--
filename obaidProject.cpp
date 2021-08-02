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
    // Atm config
    int numberOf5000,
        numberOf1000,
        numberOf500,
        numberOf100,
        numberOf50,
        numberOf20,
        numberOf10,
        numberOf5,
        numberOf2,
        numberOf1;
        // user input loop dependent
        int amount;
        // others
        int numberOfNotes;
        char again;
        // array of out put notes
        int numNotes[10];
        // for out only
        string noteName[10] =   {   "Number of 5000 notes ",
                                    "Number of 1000 notes ",
                                    "Number of 500 notes ",
                                    "Number of 100 notes ",
                                    "Number of 50 notes ",
                                    "Number of 20 notes ",
                                    "Number of 10 notes ",
                                    "Number of 5 coins ",
                                    "Number of 2 coins ",
                                    "Number of 1 coins "
                                };
    cout<<"\n\n\t\t\t\t _ _ _ _ _ _ _ _ _ _\n";
    cout<<"\t\t\t\t|                    |\n";
    cout<<"\t\t\t\t|  ATM CONFIGURATI0N |\n";
    cout<<"\t\t\t\t|_ _ _ _ _ _ _ _ _ _ |";
    cout<<"\n\n\t\t\t\tENTER THE NUMBER OF NOTES ";
    cout<<"\n\t\t\t\tNumber of Rs 5000 Notes : ";
    cin>>numberOf5000;
    cout<<"\n\t\t\t\tNumber of Rs 1000 Notes : ";
    cin>>numberOf1000;
    cout<<"\n\t\t\t\tNumber of Rs 500 Notes : ";
    cin>>numberOf500;
    cout<<"\n\t\t\t\tNumber of Rs 100 Notes : ";
    cin>>numberOf100;
    cout<<"\n\t\t\t\tNumber of Rs 50 Notes : ";
    cin>>numberOf50;
    cout<<"\n\t\t\t\tNumber of Rs 20 Notes : ";
    cin>>numberOf20;
    cout<<"\n\t\t\t\tNumber of Rs 10 Notes : ";
    cin>>numberOf10;
    cout<<"\n\t\t\t\tNumber of Rs 5 Coins : ";
    cin>>numberOf5;
    cout<<"\n\t\t\t\tNumber of Rs 2 Coins : ";
    cin>>numberOf2;
    cout<<"\n\t\t\t\tNumber of Rs 1 Coins : ";
    cin>>numberOf1;
    do {
        system("CLS");
        // array of out put notes
            int numNotes[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
            long int total =    (numberOf5000*5000) +
                                (numberOf1000*1000) +
                                (numberOf500*500) +
                                (numberOf100*100) +
                                (numberOf50*50) +
                                (numberOf20*20) +
                                (numberOf10*10) +
                                (numberOf5*5) +
                                (numberOf2*2) +
                                (numberOf1);
            cout<<"\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _\n";
            cout<<"\t\t\t\t|                       |\n";
            cout<<"\t\t\t\t| WELCOME TO LINK 1 ATM |\n";
            cout<<"\t\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _|";
            cout<<"\n\n\t\t\t\tEnter amount you want to widhdraw : ";
            cin>>amount;
        if( amount <= total ) {
            while( amount > 0 ) {
                if( amount >= 5000 && numberOf5000 > 0 ) {
                    if( numberOf5000 >= amount/5000 ) {
                        numNotes[0] = amount/5000;
                        numberOf5000 = numberOf5000 - numNotes[0];
                        amount = amount - numNotes[0]*5000;
                    }
                    else {
                        numNotes[0] = numberOf5000;
                        numberOf5000 = numberOf5000 - numNotes[0];
                        amount = amount - numNotes[0]*5000;
                    }
                }
                else if( amount >= 1000 && numberOf1000 > 0 ) {
                        if( numberOf1000 >= amount/1000 ) {
                            numNotes[1] = amount/1000;
                            numberOf1000 = numberOf1000 - numNotes[1];
                            amount = amount - numNotes[1]*1000;
                        }
                        else {
                            numNotes[1] = numberOf1000;
                            numberOf1000 = numberOf1000 - numNotes[1];
                            amount = amount - numNotes[1]*1000;
                        }
                }
                else if( amount >= 500 && numberOf500 > 0 ) {
                        if( numberOf500 >= amount/500 ) {
                            numNotes[2] = amount/500;
                            numberOf500 = numberOf500 - numNotes[2];
                            amount = amount - numNotes[2]*500;
                        }
                        else {
                            numNotes[2] = numberOf500;
                            numberOf500 = numberOf500 - numNotes[2];
                            amount = amount - numNotes[2]*500;
                        }
                }
                else if( amount >= 100 && numberOf100 > 0 ) {
                        if( numberOf100 >= amount/100 ) {
                            numNotes[3] = amount/100;
                            numberOf100 = numberOf100 - numNotes[3];
                            amount = amount - numNotes[3]*100;
                        }
                        else {
                            numNotes[3] = numberOf100;
                            numberOf100 = numberOf100 - numNotes[3];
                            amount = amount - numNotes[3]*100;
                        }
                }
                else if( amount >= 50 && numberOf50 > 0 ) {
                        if( numberOf50 >= amount/50 ) {
                            numNotes[4] = amount/50;
                            numberOf50 = numberOf50 - numNotes[4];
                            amount = amount - numNotes[4]*50;
                        }
                        else {
                            numNotes[4] = numberOf50;
                            numberOf50 = numberOf50 - numNotes[4];
                            amount = amount - numNotes[4]*50;
                        }
                }
                else if( amount >= 20 && numberOf20 > 0 ) {
                    if( numberOf20 >= amount/20 ) {
                        numNotes[5] = amount/20;
                        numberOf20 = numberOf20 - numNotes[5];
                        amount = amount - numNotes[5]*20;
                    }
                    else {
                        numNotes[5] = numberOf20;
                        numberOf20 = numberOf20 - numNotes[5];
                        amount = amount - numNotes[5]*20;
                    }
                }
                else if( amount >= 10 && numberOf10 > 0 ) {
                        if( numberOf10 >= amount/10 ) {
                            numNotes[6] = amount/10;
                            numberOf10 = numberOf10 - numNotes[6];
                            amount = amount - numNotes[6]*10;
                        }
                        else {
                            numNotes[6] = numberOf10;
                            numberOf10 = numberOf10 - numNotes[6];
                            amount = amount - numNotes[6]*10;
                        }
                }
                else if( amount >= 5 && numberOf5 > 0 ) {
                        if( numberOf5 >= amount/5 ) {
                            numNotes[7] = amount/5;
                            numberOf5 = numberOf5 - numNotes[7];
                            amount = amount - numNotes[7]*5;
                        }
                        else {
                            numNotes[7] = numberOf5;
                            numberOf5 = numberOf5 - numNotes[7];
                            amount = amount - numNotes[7]*5;
                        }
                }
                else if( amount >= 2 && numberOf2 > 0 ) {
                    if( numberOf2 >= amount/2 ) {
                        numNotes[8] = amount/2;
                        numberOf2 = numberOf2 - numNotes[8];
                        amount = amount - numNotes[8]*2;
                    }
                    else {
                        numNotes[8] = numberOf2;
                        numberOf2 = numberOf2 - numNotes[8];
                        amount = amount - numNotes[8]*2;
                    }
                }
                else if( amount >= 1 && numberOf1 > 0 ) {
                        if( numberOf1 >= amount ) {
                            numNotes[9] = amount;
                            numberOf1 = numberOf1 - numNotes[9];
                            amount = amount - numNotes[9];
                        }
                        else {
                            numNotes[9] = numberOf1;
                            numberOf1 = numberOf1 - numNotes[9];
                            amount = amount - numNotes[9];
                        }
                }
                else {
                    cout<<"\n\t\t\t\t Sorry no change available for Rs"<<amount<<endl;
                    amount = 0;
                }
            }
            // out put 
            cout<<"\n\t\t\t\t  //////////////\n";
            cout<<"\t\t\t\t / ATM OUTPUT /\n";
            cout<<"\t\t\t\t//////////////\n\n";
            for( int i=0; i < 10; i++) {
                if( numNotes[i] > 0 ) {
                cout<<"\t\t\t\t"<<noteName[i]<<" => "<<numNotes[i]<<endl;
                }
            }
            cout<<"\n\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
            cout<<"\t\t\t\t|                             |\n";
            cout<<"\t\t\t\t|  ALTERED ATM CONFIGURATIONS |\n";
            cout<<"\t\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _|";
            cout<<"\n\n\t\t\t\tReamain 5000 notes : "<<numberOf5000<<endl;
            cout<<"\t\t\t\tReamain 1000 notes : "<<numberOf1000<<endl;
            cout<<"\t\t\t\tReamain 500 notes : "<<numberOf500<<endl;
            cout<<"\t\t\t\tReamain 100 notes : "<<numberOf100<<endl;
            cout<<"\t\t\t\tReamain 50 notes : "<<numberOf50<<endl;
            cout<<"\t\t\t\tReamain 20 notes : "<<numberOf20<<endl;
            cout<<"\t\t\t\tReamain 10 notes : "<<numberOf10<<endl;
            cout<<"\t\t\t\tReamain 5 coins : "<<numberOf5<<endl;
            cout<<"\t\t\t\tReamain 2 coins : "<<numberOf2<<endl;
            cout<<"\t\t\t\tReamain 1 coins : "<<numberOf1<<endl;
        }
        else {
            cout<<"\n\t\t\t\tSorry ATM does not have enough amount...!";
        }
        cout<<"\n\t\tWant to withdraw more ?, If yes enter y : ";
        cin>>again;
    }
    while( again == 'Y' || again == 'y' );
    getche();
    
}
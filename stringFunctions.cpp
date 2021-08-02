#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

// ALGORITHMS
/*

// stringMultiplyer

where "a" is the string & "number" is minumum length to attain

1. loop while length of a is < number
    set a = concatination of a with itself.
2. exit with a.

// frequencyofChar

where "a" is string in which to display the occurencies of "s"

1. set i = 0;
2. loop til end of the string
    if charecter at ith index of a is s then Print i.
    increment in i by 1.
3. exit
    
*/
/*----------------------------------Function Declaration------------------------------------*/
int lenth(string);

string concatenate(char, char);

string stringMultiplyer(string, int);

void frequencyofChar(string, char);

/*--------------------------------Function Definations------------------------------------*/
int lenth(string a)
{
    int counter = 0;
    while (a[counter] != '\0')
    {
        counter++;
    }
    return counter;
}

string concatenate(char a[], char b[])
{
    int sizeA = lenth(a);
    int sizeB = lenth(b);
    int index = 0;
    while (index < sizeB)
    {
        a[sizeA] = b[index];
        index++;
        sizeA++;
    }
    return a;
}

string stringMultiplyer(string a, int number)
{

    while (lenth(a) < number)
    {
        a = a + a;
    }

    return a;
}

void frequencyofChar(string a, char s)
{
    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] == s)
        {
            cout << "index : " << i << endl;
        }
        i++;
    }
}

int main()
{
    string s1 = "A computer is an idiot machine";
    string s2 = "Data Structures is a prerequisite for compiler construction";

    // test lenth
    cout << "string : " << s1 << ", lenth : " << lenth(s1) << endl;
    cout << "string : " << s2 << ", lenth : " << lenth(s2) << endl;

    // test concatenate
    char s3[] = "But", s3Copy[] = "But", s5Copy[] = "Symmetric", s5[] = "Symmetric";
    char s4[] = "ter";
    char s6[] = "Multiprocessing";

    cout << "string A : " << s3Copy << ", string B : " << s4 << ", New string : " << concatenate(s3, s4) << endl;
    cout << "string A : " << s5Copy << ", string B : " << s6 << ", New string : " << concatenate(s5, s6) << endl;

    // test stringMultiplyer
    cout << stringMultiplyer("wha", 5) << endl;

    //  test frequencyofChar
    frequencyofChar("I am The One.", 'e');

    return 0;
}
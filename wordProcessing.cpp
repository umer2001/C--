#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

/*----------------------------------Function Declaration------------------------------------*/

// basic string Functions
int lenth(string);

string concatenate(char, char);

string subString(string, int, int);

char convertToCharArray(string);

// word processing functions
string ins(string, int, string);

string del(string, int, int);

/*--------------------------------Function Definations------------------------------------*/

// basic string Functions
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

string subString(string a, int ip, int len)
{
    int i = ip, count = 0;
    char dest[len - ip + 1];
    while (i <= len)
    {
        dest[count] = a[i];
        i++;
        count++;
    }
    dest[count] = '\0';
    return dest;
}

char *toCharArray(string a, char *ptr)
{
    int size = lenth(a);
    // char test[size];
    for (int i = 0; i < size; i++)
    {
        *ptr = a[i];
        ptr++;
    }
    *ptr = '\0';
    return ptr;
}

// word processing functions
string ins(string a, int indexToInsert, string textToInsert)
{
    string tmp1 = subString(a, 0, indexToInsert - 1);
    string tmp2 = subString(a, indexToInsert, lenth(a));

    return tmp1 + textToInsert + tmp2;
}

string del(string a, int indexFrom, int len)
{
    string tmp1 = subString(a, 0, indexFrom - 1);
    string tmp2 = subString(a, indexFrom + len, lenth(a));
    return tmp1 + tmp2;
}

int main()
{
    string testIns = "The founder of our country was Quaid-e-Azam", testDel = "Database Management Systems";

    // test ins
    cout << "initial string : " << testIns << ", inserted \" and first Governorb \" result : " << ins(testIns, 12, "and first Governor ") << endl;

    // test del
    cout << "initial string : " << testDel << ", delete 3 charecters from index \"9\" result : " << del(testDel, 9, 10) << endl;

    return 0;
}
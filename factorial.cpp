#include <conio.h>
#include <math.h>
#include <iostream>
using namespace std;

/*
Algorithm for factorial

where "num" is the number of which we want to find factorial. 

1. declare num, i fact.
2. set fact = 1.
3. set i = 1.
4. loop for i <= num.
    fact = fact x i
5. print final value of fact
*/

int main()
{

    int num, i, fact = 1;

    cout << "\n\n\t\t\t    =>\t"
         << "Enter a number for factorial : ";
    cin >> num;

    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "\n\t\t\t    =>\t" << fact;
    getche();
}
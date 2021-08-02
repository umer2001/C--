#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int n,i;
    cout<<"\n\n\t\t\t\t=>\tPROGRAM TO CHECK PRIME OR NOT\t<=";
    bool isPrime=true;
    cout<<"\n\n\t\t\t    =>\tEnter a number to check is prime or not : ";
    cin>>n;
    for(i = 2; i <= n / 2; ++i) {
        if(n % i == 0) {
          isPrime = false;
          break;
        }
    }
  if (isPrime)
      cout<< "\n\n\t\t\t    =>\t"<<n<<" is a prime number.";
  else
      cout<< "\n\n\t\t\t    =>\t"<<n<<" is not a prime number.";

    getche();
}
#include <iostream>
using namespace std;
int  numPrint(int);
int main()
{
    int n = 1;
	cout<<"\n"<<"Recursion : print first 50 natural numbers :"<<"\n";
	cout<<"-------------------------------------------------"<<"\n";
	cout<<" The natural numbers are :";
    numPrint(n);
    cout<<"\n";
    return 0;
}
int numPrint(int n)
{
    if(n<=50)
    {
         cout<<" "<<n;
         numPrint(n+1);
    }
}

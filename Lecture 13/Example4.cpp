#include<iostream>
#include<conio.h>
using namespace std;
 int main()
 {
  int a;
  cin>>a;
  try
  {
    try
    {
     throw a;
    }
    catch(int x)
     {
      cout<<"\nException in inner try-catch block.";
      throw x;
     }
   }
  catch(int n)
   {
    cout<<"\nException in outer try-catch block.";
   }
  cout<<"\nEnd of program.";

 }

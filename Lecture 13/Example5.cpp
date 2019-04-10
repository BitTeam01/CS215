#include<iostream>
#include<conio.h>
using namespace std;
  void Demo() throw(int ,double)
       {
            int a=2;

                  if(a==1)
                      throw a;                  //throwing integer exception

                  else if(a==2)
                      throw 'A';                //throwing character exception

                  else if(a==3)
                      throw 4.5;                //throwing float exception

       }

       int main()
       {

              try
              {
                  Demo();
              }
              catch(int n)
              {
                  cout<<"\nException caught.";
              }

              cout<<"\nEnd of program.";
              return 0;

       }

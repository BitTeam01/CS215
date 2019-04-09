//Write a C++ program (using function overloaded) to sort 10 integer values.
#include <iostream>

using namespace std;

void mysort(int vallist[]){

    int i,j;
    int temp;
      for(i=0;i<10;i++)
     for(j=0;j<9;j++)
      if(vallist[j]>vallist[j+1]){
         temp=vallist[j];
         vallist[j]=vallist[j+1];
         vallist[j+1]=temp;
       }

       for(i=0;i<10;i++)cout<<vallist[i]<<"\n";

}

int main()
{
  int vallist[10],i;
  cout<<" Enter 10 integer values:";
  for(i=0;i<10;i++)
    cin>>vallist[i];
  mysort(vallist);
  return 0; }


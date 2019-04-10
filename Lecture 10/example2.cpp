#include <iostream>
using namespace std;
class base
{
  private:
  int x;
  public:
  int y;
  base()
  {
     x = 10;
     y = 15;
  }
 };
 class derive1 : public base   //public derivation
 {
   public:
   void display()
   {
      cout << "x of base class is not accessible" << endl;
      cout << "value of y in base class = " << y;
   }
 };
 int main()   //main program
 {
   derive1 obj;
   obj.display();
   return 0;
 }      //end of program

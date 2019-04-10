#include <iostream>
using namespace std;

class Circle //specify a class
{
    private :
        double radius; //class data members
    public:
        void setRadius(double r);
        double getArea(); //member function to return area
};

void Circle :: setRadius(double r)
{
    radius = r;
}

double Circle :: getArea()
{
    return 3.14 * radius * radius;
}

int main()
{
    Circle c1; //define object of class circle
    c1.setRadius(2.5); //call member function to initialize radius
    cout<<c1.getArea(); //display area of circle object
    return 0;
}

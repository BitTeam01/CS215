#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float P,R,T,CI;
	cout<<"Enter Principal, Rate and Time : ";
	cin>>P>>R>>T;
	CI=P*pow((1+R/100),T) - P;
	cout<<"Compound Interest is : "<<CI;

	return 0;
}

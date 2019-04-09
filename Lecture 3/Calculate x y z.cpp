#include <iostream>
using namespace std;
int raiseToPower(int base, int exponent) {
int result = 1;
for (int i = 0; i < exponent; i = i + 1) {
result = result * base;
}
return result;
}
int main() {
int x,y,z,E;
cout<<"Enters three integer numbers : ";
    cin >> x >> y>>z;
E= raiseToPower(x, 3)+raiseToPower(y, 2)+raiseToPower(z, 4);
cout<<"E="<<E<<endl;
return 0;
}

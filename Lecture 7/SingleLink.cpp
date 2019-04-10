
#include <iostream>
using namespace std;
struct node {
    int data1;
    int data2;
    struct node* link;
};

int main()
{
    struct node ob1; // Node1

    // Intialization
    ob1.link = NULL;
    ob1.data1 = 10;
    ob1.data2 = 20;

    struct node ob2; // Node2

    // Initialization
    ob2.link = NULL;
    ob2.data1 = 30;
    ob2.data2 = 40;

    // Linking ob1 and ob2
    ob1.link = &ob2;

    // Accessing data members of  ob2 using ob1
    cout<<ob1.link->data1<<endl;
    cout<<ob1.link->data2;
    return 0;
}

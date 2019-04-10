
#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* prev_link;
    struct node* next_link;
};

int main()
{
    struct node ob1; // Node1

    // Intialization
    ob1.prev_link = NULL;
    ob1.next_link = NULL;
    ob1.data = 10;

    struct node ob2; // Node2

    // Intialization
    ob2.prev_link = NULL;
    ob2.next_link = NULL;
    ob2.data = 20;

    struct node ob3; // Node3

    // Intialization
    ob3.prev_link = NULL;
    ob3.next_link = NULL;
    ob3.data = 30;

    // Forward links
    ob1.next_link = &ob2;
    ob2.next_link = &ob3;

    // Backward links
    ob2.prev_link = &ob1;
    ob3.prev_link = &ob2;

    // Accessing  data of ob1, ob2 and ob3 by ob1
    cout<<ob1.data<<"\t";
    cout<<ob1.next_link->data<<"\t";
    cout<<ob1.next_link->next_link->data<<endl;

    // Accessing data of ob1, ob2 and ob3 by ob2
    cout<<ob2.prev_link->data<<"\t";
    cout<<ob2.data<<"\t";
    cout<<ob2.next_link->data<<endl;

    // Accessing data of ob1, ob2 and ob3 by ob3
    cout<<ob3.prev_link->prev_link->data<<"\t";
    cout<<ob3.prev_link->data<<"\t";
    cout<<ob3.data<<endl;

  return 0;
}


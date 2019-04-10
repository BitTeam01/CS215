#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("out.txt");

    int count = 0;
    char ch;

    while(!fin.eof())
    {
        fin.get(ch);
        count++;
    }

    cout << "Number of characters in file are " << count;

    fin.close();
    return 0;
}

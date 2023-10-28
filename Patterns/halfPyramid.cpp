#include<iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    for(int rows=0;rows<x;rows++)
    {
        for(int cols=0;cols<rows+1;cols++)
        {
            cout << "* ";
        }
        cout << endl;
    }



}
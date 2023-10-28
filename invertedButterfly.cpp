#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n = n / 2;
    for(int rows=0;rows<n;rows++)
    {
        //inverted pyramid 1
        for(int cols=0;cols<n-rows;cols++)
        {
            cout << "*";
        }

        //full pyramid
        for(int cols=0;cols<2*rows+1;cols++)
        {
            cout << " ";
        }
        //inverted pyramid 2
        for(int cols=0;cols<n-rows;cols++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    for(int rows=0;rows<n;rows++)
    {
        for(int cols=0;cols<rows+1;cols++)
        {
            cout << "*";
        }
        for(int cols=0;cols<2*n-2*rows-1;cols++)
        {
            cout << " ";
        }

        for(int cols=0;cols<rows+1;cols++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
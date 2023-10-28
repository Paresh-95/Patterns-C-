#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int rows=0;rows<n;rows++)
    {
        //spaces
        for(int cols=0;cols<rows;cols++)
        {
            cout << " ";
        }
        //stars
        for(int cols=0;cols<n-rows;cols++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
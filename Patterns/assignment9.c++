#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int rows=0;rows<2*n;rows++)
    {
        int cond = rows<n ? rows : 0;
        int space = rows<n ? 2*(n-rows-1):0;
        for(int cols=0;cols<2*n;cols++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
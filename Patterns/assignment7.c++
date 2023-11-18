#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c=1;
    for(int rows=0;rows<n;rows++)
    {
        for(int cols=0;cols<rows+1;cols++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}
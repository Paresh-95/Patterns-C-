#include<iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    for(int rows=1;rows<=n;rows++)
    {
        int c=1;
        for(int cols=1;cols<=rows;cols++)
        {
            cout << c << " ";
            c=c*(rows-cols)/cols;
        }
        cout << endl;
    }
}
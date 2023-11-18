#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for(int rows=0;rows<n;rows++)
    // {
    //     for(int cols=0;cols<rows;cols++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for(int rows=0;rows<n;rows++)
    // {
    //     for(int cols=1;cols<=n-rows;cols++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    
    for (int rows = 0; rows < 2*n-1; rows++)
    {
        int cond = 0;
        if (rows < n)
        {
            cond = rows;
        }else{
            cond = n-(rows%n)-2;
        }
        for (int cols = 0; cols <=cond; cols++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
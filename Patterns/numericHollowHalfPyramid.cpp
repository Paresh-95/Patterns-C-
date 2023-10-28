#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int rows=0;rows<n;rows++)
    {
        cout << 1;
    }

    for (int rows = 0; rows < n; rows = rows + 1)
    {
        if (rows == 0 || rows == n - 1)
        {
            for (int cols = 0; cols < rows; cols++)
            {
                cout << cols + 2;
            }
        }
        else
        {
            for (int cols = 0; cols < rows; cols++)
            {
                cout << "_";
            }
            cout << rows + 1;
        }
        cout << endl;
    }
}
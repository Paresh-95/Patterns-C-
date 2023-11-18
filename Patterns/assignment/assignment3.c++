#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = n;

    for (int rows = 0; rows < n; rows++)
    {
        int c = 1;
        for (int cols = 0; cols < k; cols++)
        {

            // for space
            if (cols < n - rows - 1)
            {
                cout << " ";
            }
            else
            {
                cout << c;
                c++;
            }
        }
        k++;
        cout << endl;
    }
}
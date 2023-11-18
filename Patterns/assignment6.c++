#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c=1;
    for (int rows = 0; rows < n; rows++)
    {
        int cond = rows<=n/2 ? 2*rows : 2*(n-rows-1);
        for(int cols=0;cols<=cond;cols++)
        {
            if(cols<=cond/2)
            {
                cout << cols+1;
            }
            else
            {
                cout << cond-cols+1;
            }
           
        }
         cout << endl;
    }
}
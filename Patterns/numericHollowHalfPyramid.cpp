#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // n=n/2;   
    for(int rows=0;rows<n;rows++)
    {
        for(int cols=0;cols<rows;cols++)
        {
            if(rows==0||rows==rows-1)
            {
                cout << rows+2;
            }
            else
            {
                for(int cols=0;cols<rows;cols++)
                {
                    cout << "_";
                }
                
            }

            
        }
        cout << endl;
    }
}
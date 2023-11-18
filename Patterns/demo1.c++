#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int rows=0;rows<n;rows++)
    {
        for(int cols=rows+1;cols<n+1;cols++)
        {
            if(rows==1 || rows==2)
            {
                if(cols==rows+2 || cols==rows+3)
                {
                    cout << " "; 
                }
                else
                {
                    cout << cols;
                }
            }
            else
            {
                cout << cols;
            }
        }
        cout << endl;
    }
}
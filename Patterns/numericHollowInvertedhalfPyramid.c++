#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int rows=0;rows<n;rows++)
    {
        for(int cols=0;cols<n-rows;cols++)
        {
           if(rows==0|| rows==n-1 )
           {
            cout << rows+1;
           }
           else
           {
            if(cols==0 || cols==n-rows-1)
            {
                cout << cols+2;
            }
            else
            {
                cout << " ";
            }
           }
           
        }
        cout << endl;
    }



}
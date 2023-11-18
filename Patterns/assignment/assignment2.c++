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
           if(cols==rows+1 || cols==n || rows==0)
           {
            cout << cols;

           }
           else
           {
            cout << " "; 
           }
        }
        cout << endl;
    }
}
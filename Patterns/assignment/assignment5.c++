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
            cout << c;
            c++;
        }
        cout << endl;
    }


    int start = c-n;
    for(int rows=0;rows<n;rows++)
    {
        int k=start;
        for(int cols=0;cols<=n-rows-1;cols++)
        {
            cout << k;
            k++;
        }

        start-=n-rows-1;
        cout << endl;
    }
}

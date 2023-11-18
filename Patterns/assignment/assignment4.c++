#include<iostream>
#include "assert.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int rows=0;rows<n;rows++)
    {
        int start = 8-rows;
        int num = rows+1;
        int count = num;
        for(int cols=0;cols<17;cols++)
        {
            if(count>0 && cols==start)
            {
                cout << num;
                start+=2;
                count--;
            }
            else
            {
                cout <<"*";
            }
        }
        cout << endl;
    }
}
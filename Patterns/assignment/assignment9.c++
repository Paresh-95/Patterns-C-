#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int rows=0;rows<2*n;rows++)
    {
        int cond = rows<n ? rows : (n+(n-rows-1));
        int space = rows<n ? 2*(n-cond-1): rows-cond-1;
        for(int cols=0;cols<2*n;cols++)
        {
            if(cols<=cond){
                cout << "*";
            }
            else if(space>0)
            {
                cout << " ";
                space--;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

}
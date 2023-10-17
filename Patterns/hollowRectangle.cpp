#include <iostream>
using namespace std;

int main()
{
    int r,c;
    cout << "Enter rows = ";
    cin >> r;
    cout << "Enter cols = ";
    cin >> c;
    for(int rows=0;rows<r;rows++)
    {
        for(int cols=0;cols<c;cols++)
        {
            if(rows==0||rows==r-1)
            {
                cout << "* ";
            }
            else
            {
                if(cols==0||cols==c-1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}
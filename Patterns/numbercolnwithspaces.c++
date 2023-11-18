#include<iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter rows: ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i || i == row - 1)
            {
                cout << j+1;
            }
            else
            {
                cout << " ";
            }
        }
          cout << endl;
    }
  return 0;
}

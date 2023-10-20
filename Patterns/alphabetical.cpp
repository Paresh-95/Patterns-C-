#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int rows = 0; rows < n; rows++)
    {
        char ch;
        for (int cols = 0; cols < rows + 1; cols++)
        {
            ch = cols + 1 + 'A' - 1;
            cout << ch;
        }
        
        
        for(char alpha=ch;alpha>'A';)
        {
            alpha--;
            cout << alpha;
        }
        cout << endl;
    }
}
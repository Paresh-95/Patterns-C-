#include <iostream>
using namespace std;

int main(){
{
    int N;
    cin >> N;
    int i, j, k = 0;
   
    for (i = 1; i <= N; i++) {
        
        for (j = i; j <= N; j++) {
            if (i == 1 || j == i || j == N)
                cout << j << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    int n;
    cin >> n;
    for(int rows=1;rows<=n;rows++)
    {
        for(int cols=rows;cols<n;cols++)
        {
            if()
        }
    }


}
}
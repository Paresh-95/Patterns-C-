#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;   
    for(int i=1;i<=num;i++)
    {
        fact = fact*i;     
    }
    return fact;
}



int main()
{
    int num;
    cin >> num;
    int ans =  factorial(num);
    cout << "factorial of " << num << " is " << ans << endl;
}
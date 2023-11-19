#include<iostream>
using namespace std;

bool evenOrOdd(int num)
{
    // if(num%2==0) 
    if((num&1)==0)
    {
        return true;
    }
    else
    {
        return false; 
    }
}

void Condition( bool isEven,int num)
{
    if(isEven)
    {
        cout << num << " is a Even Number";
    }
    else
    {
        cout << num << " is a Odd Number";
    }
}

int main()
{
    int num;
    cout << "Enter a Number = ";
    cin >> num;
    bool isEven = evenOrOdd(num);
    Condition(isEven,num);

}
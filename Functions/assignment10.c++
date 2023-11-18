#include<iostream>
#include <cmath>
using namespace std;

float areaOfCircle(float radius, float pi)
{
    float area = pi*radius*radius;
    return area;
}

int main()
{

    int radius;
    cout << "Enter radius = ";
    cin >> radius;
    cout << "Radius = " << radius << endl;
    float pi = M_PI ;
    cout <<"Pi = " <<pi << endl;
    cout << "Area of Circle is " << areaOfCircle(radius,pi) << endl; 
    return 0;
}
    
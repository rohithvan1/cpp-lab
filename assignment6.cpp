//6. Write a C++ program to implement a telephone bill class with Name, Address, Tel. No., No. of calls
//as data members. Compute the amount to be paid if the charges per call is Rs. 2/-. using friend
//function

//Answer

#include <iostream>
using namespace std;

float area(float r) 
{
    float a;
    a = 3.14 * r * r;

    return a;
}

float area(int s) 
{
    int a;
    a = s * s;

    return a;
}

float area(float l, float b) 
{
    float a;
    a = l * b;

    return a;
}

float area(int b, int h, int dummy) 
{
    int a;
    a = 0.5 * b * h;

    return a;
}

int main()
{
    float r, l, b_rect;
    int s, base, height;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of Circle = " << area(r) << endl;

    cout << "\nEnter side of square: ";
    cin >> s;
    cout << "Area of Square = " << area(s) << endl;

    cout << "\nEnter length and breadth of rectangle: ";
    cin >> l >> b_rect;
    cout << "Area of Rectangle = " << area(l, b_rect) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << area(base, height, 0) << endl;

    return 0;
}

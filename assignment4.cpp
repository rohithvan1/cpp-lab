//4. Write a C++ program to find the area of circle, square, rectangle and triangle using inline functions

//Answer

#include <iostream>
#include <cmath> // for M_PI (π)
using namespace std;

inline float areaCircle(float radius) {
return M_PI * radius * radius;
}

inline float areaSquare(float side) {
   return side * side;
}

inline float areaRectangle(float length, float width) {
   return length * width;
}

inline float areaTriangle(float base, float height) {
  return 0.5 * base * height;
}

int main() {
    float radius, side, length, width, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Enter side of square: ";
    cin >> side;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;

    cout << "\n--- Area Calculations ---" << endl;
    cout << "Area of Circle: " << areaCircle(radius) << endl;
    cout << "Area of Square: " << areaSquare(side) << endl;
    cout << "Area of Rectangle: " << areaRectangle(length, width) << endl;
    cout << "Area of Triangle: " << areaTriangle(base, height) << endl;

    return 0;
}

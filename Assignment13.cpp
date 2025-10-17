// 13. Write a C++ program to explain virtual functions by creating a base class c_polygon, which has a
// virtual function area(). Two classes, c_rectangle and c_traingle, are derived from c_polygon, and
// these classes have area() to calculate and return the area of a rectangle and a triangle, respectively.

//Answer

#include <iostream>
using namespace std;

class c_polygon {
public:
    virtual void area() {
        cout << "Area function of base class called." << endl;
    }
};

class c_rectangle : public c_polygon {
private:
    float length;
    float width;

public:
    void input() {
        cout << "Enter length and width of rectangle: ";
        cin >> length >> width;
    }

    void area() {
        float a = length * width;
        cout << "Area of Rectangle: " << a << endl;
    }
};

class c_triangle : public c_polygon {
private:
    float base;
    float height;

public:
    void input() {
        cout << "Enter base and height of triangle: ";
        cin >> base >> height;
    }

    void area() {
        float a = 0.5 * base * height;
        cout << "Area of Triangle: " << a << endl;
    }
};

int main() {
    c_polygon* poly; 

    c_rectangle rect;
    c_triangle tri;

    cout << "--- Rectangle ---" << endl;
    rect.input();
    poly = &rect;   
    poly->area();   

    cout << "\n--- Triangle ---" << endl;
    tri.input();
    poly = &tri;     
    poly->area();    

    return 0;
}

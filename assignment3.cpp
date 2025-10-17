// 3. Write a program to create a Rectangle class with two private data members: length and width.
// Create a default constructor that initialises both members to 0 and a parameterized constructor.
// Create two different objects of class Rectangle using these different types of constructors and display
// their values using a member function. Write a destructor that prints a message when an object is
// destroyed.

//Answer

#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called!" << endl;
    }

    Rectangle(float l, float w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called!" << endl;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
    ~Rectangle() {
        cout << "Destructor called for Rectangle object." << endl;
    }
};

int main() {
    cout << "Creating rect1 using default constructor..." << endl;
    Rectangle rect1;
    rect1.display();

    cout << "\nCreating rect2 using parameterized constructor..." << endl;
    Rectangle rect2(10.5, 6.3);
    rect2.display();

    cout << "\nProgram ending... destructors will be called automatically." << endl;

    return 0;
}

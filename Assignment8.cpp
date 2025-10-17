//8. C++ program to illustrate the use of unary operator overloading, increment ++ operator
//overloading

//Answer

#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() {
        count = 0;
    }

    void display() {
        cout << "Count = " << count << endl;
    }

    void operator++() {
        count = count + 1;
    }
};

int main() {
    Counter c1;

    cout << "Initial value: ";
    c1.display();

    cout << "After incrementing (++c1): ";
    ++c1; 
    c1.display();

    cout << "Increment again (++c1): ";
    ++c1;
    c1.display();

 
}

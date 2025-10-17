// 7. Write a program to define a class Time having private members hours, minutes, and seconds.
// Write member functions
// 1. To input values to data members
// 2. To display Time in Hour:minute: second format. 3.
// 3. To find the sum of two Time objects using a friend function.

//Answer 

#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    void inputTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }
    void displayTime() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    friend Time sumTime(Time t1, Time t2);
};
Time sumTime(Time t1, Time t2) {
    Time t3;

    t3.seconds = t1.seconds + t2.seconds;
    t3.minutes = t1.minutes + t2.minutes + t3.seconds / 60; 
    t3.seconds = t3.seconds % 60;

    t3.hours = t1.hours + t2.hours + t3.minutes / 60; 
    t3.minutes = t3.minutes % 60;

    return t3;
}

int main() {
    Time t1, t2, t3;

    cout << "Enter first time:" << endl;
    t1.inputTime();

    cout << "\nEnter second time:" << endl;
    t2.inputTime();

    t3 = sumTime(t1, t2);

    cout << "\nFirst Time: ";
    t1.displayTime();

    cout << "Second Time: ";
    t2.displayTime();

    cout << "Sum of Times: ";
    t3.displayTime();

    return 0;
}

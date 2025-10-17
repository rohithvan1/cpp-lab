//1. Write a program to define a class Car with attributes like brand, model, and year. Write member
//functions for the following.
//1. To read data members.
//2. To display car details
//Create three Car objects with different attributes and display details of each one.

//Answer

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    void readData() {
        cout << "Enter car brand: ";
        cin >> brand;
        cout << "Enter car model: ";
        cin >> model;
        cout << "Enter manufacturing year: ";
        cin >> year;
    }

    void display() {
        cout << "\nCar Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car car1, car2, car3;

    cout << "Enter details for Car 1:" << endl;
    car1.readData();

    cout << "\nEnter details for Car 2:" << endl;
    car2.readData();

    cout << "\nEnter details for Car 3:" << endl;
    car3.readData();

    cout << "\n--- Car Information ---" << endl;
    car1.display();
    car2.display();
    car3.display();

    return 0;
}

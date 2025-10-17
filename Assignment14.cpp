// 14. Write a C++ program to define a class Student with data members Name, Rollno, and Course.
// Derive a class Test from a student with data members as marks in 3 subjects. Derive a class
// GraceMarks from a student with a data member BonusMark. Derive a class result from both Test and
// Gracemarks and calculate the Total marks. Display the result with all the details. Use the concept of a
// Virtual base class.

// Assignment

#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string Name;
    int Rollno;
    string Course;

public:
    void inputStudent() {
        cout << "Enter Name: ";
        cin>>Name;
        cout << "Enter Roll Number: ";
        cin >> Rollno;
        cin.ignore();
        cout << "Enter Course: ";
        cin>>Course;
    }

    void displayStudent() {
        cout << "Name: " << Name << endl;
        cout << "Roll Number: " << Rollno << endl;
        cout << "Course: " << Course << endl;
    }
};

class Test : virtual public Student {
protected:
    int marks1, marks2, marks3;

public:
    void inputMarks() {
        cout << "Enter marks for 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }

    int totalMarks() {
        return marks1 + marks2 + marks3;
    }
};

class GraceMarks : virtual public Student {
protected:
    int BonusMark;

public:
    void inputBonus() {
        cout << "Enter Bonus Marks: ";
        cin >> BonusMark;
    }

    int getBonus() {
        return BonusMark;
    }
};
class Result : public Test, public GraceMarks {
public:
    void displayResult() {
        displayStudent();
        cout << "Marks in 3 subjects: " << marks1 << ", " << marks2 << ", " << marks3 << endl;
        cout << "Bonus Marks: " << BonusMark << endl;
        int total = totalMarks() + getBonus();
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result r;

    cout << " Enter Student Details" << endl;
    r.inputStudent();
    r.inputMarks();
    r.inputBonus();

    cout << "\n Student Result" << endl;
    r.displayResult();

}

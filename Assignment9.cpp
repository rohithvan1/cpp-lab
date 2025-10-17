//9. Perform matrix addition using operator overloading

//Answer 

#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[2][2]; 

public:
    void inputMatrix() {
        cout << "Enter 2x2 matrix elements:" << endl;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> mat[i][j];
            }
        }
    }
    void displayMatrix() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(Matrix m) {
        Matrix temp;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }
        return temp;
    }
};

int main() {
    Matrix m1, m2, m3;

    cout << "Enter elements for first matrix:" << endl;
    m1.inputMatrix();

    cout << "\nEnter elements for second matrix:" << endl;
    m2.inputMatrix();
  
    m3 = m1 + m2;

    cout << "\nFirst Matrix:" << endl;
    m1.displayMatrix();

    cout << "\nSecond Matrix:" << endl;
    m2.displayMatrix();

    cout << "\nSum of Matrices:" << endl;
    m3.displayMatrix();

    return 0;
}

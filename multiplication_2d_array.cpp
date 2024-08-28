//Adrish Purkayastha
//EnTC A
//PRN: 23070123011
//C++ program to find the multiplication of two matrices
#include <iostream>
using namespace std;
int main() {
    int r1, c1, r2, c2;
    // Enter row and columns of matrices
    cout << "Enter the number of rows of the first matrix: ";
    cin >> r1;
    cout << "Enter the number of columns of the first matrix: ";
    cin >> c1;
    cout << "Enter the number of rows of the second matrix: ";
    cin >> r2;
    cout << "Enter the number of columns of the second matrix: ";
    cin >> c2;
    // Check if matrix multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication is not possible. Number of columns in the first matrix must equal the number of rows in the second matrix." << endl;
        return 1;
    }
    // Declare matrices
    int A[r1][c1], B[r2][c2], C[r1][c2];
    // Initialize all elements of C to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }
    // Enter elements for the first matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
    // Input elements for the second matrix
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }
    // Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; ++k) { // Use `c1` instead of `r2` for iteration
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // Display the result
    cout << "The resultant matrix is:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

/*
OUTPUT:
Enter the number of rows of the first matrix: 2
Enter the number of columns of the first matrix: 3
Enter the number of rows of the second matrix: 3
Enter the number of columns of the second matrix: 2
Enter elements of the first matrix:
A[0][0]: 1
A[0][1]: 2
A[0][2]: 3
A[1][0]: 4
A[1][1]: 5
A[1][2]: 6
Enter elements of the second matrix:
B[0][0]: 2
B[0][1]: 3
B[1][0]: 4
B[1][1]: 6
B[2][0]: 8
B[2][1]: 9
The resultant matrix is:
34 42
76 96
*/
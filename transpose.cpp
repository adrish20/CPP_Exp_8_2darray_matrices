//Adrish Purkayastha
//EnTC A
//PRN: 23070123011
//C++ program to find the transpose of a matrix
#include <iostream>
using namespace std;
int main() {
    int i, j, r, c;
    // Enter rows and columns
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    // Initialize array
    int arr[r][c];
    int trans[c][r];
    // Input elements into the array
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout << "Enter element arr"<<i<<j<<": ";
            cin >> arr[i][j];
        }
    }
    // Display the initial array
    cout << endl << "The Initial Matrix is:" << endl;
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // Calculate transpose
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            trans[j][i] = arr[i][j];
        }
    }
    // Display the transpose of the array
    cout << endl << "The Transpose of the Matrix is:" << endl;
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
OUTPUT:
Enter number of rows: 3
Enter number of columns: 2
Enter element arr00: 1
Enter element arr01: 2
Enter element arr10: 3
Enter element arr11: 4
Enter element arr20: 5
Enter element arr21: 6

The Initial Matrix is:
1 2
3 4
5 6

The Transpose of the Matrix is:
1 3 5
2 4 6
*/
//Adrish Purkayastha
//EnTC A
//PRN:23070123011
//C++ program to find the sum of forward diagonal elements of a square matrix
#include <iostream>
using namespace std;
int main() {
    int i, j, r, c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    if (r != c) {
        cout << "Matrix is not a square matrix." << endl;
        return 0;
    }
    //taking input of matrix
    int arr[r][c];
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout << "Enter element arr"<<i<<j<<": ";
            cin >> arr[i][j];
        }
    }
    //printing the matrix
for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout <<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //calculating sum
    int sum = 0;    
    for(i = 0; i < r; i++) {
        sum += arr[i][i];
    }
    //display sum
    cout << "The sum of diagonal elements of the matrix: " << sum << endl;
    return 0;
}
/*
OUTPUT:
Enter number of rows: 3
Enter number of columns: 3
Enter element arr00: 1
Enter element arr01: 2
Enter element arr02: 3
Enter element arr10: 4
Enter element arr11: 5
Enter element arr12: 6
Enter element arr20: 7
Enter element arr21: 8
Enter element arr22: 9
1 2 3
4 5 6
7 8 9
*/
//Adrish Purkayastha
//EnTC A
//PRN:23070123011
//C++ program to find the sum of reverse diagonal elements of a square matrix
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
    int arr[r][c];
    //taking input of matrix
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout << "Enter element arr"<<i<<j<<": ";
            cin >> arr[i][j];
        }
    }
    //printing matrix
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout <<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //calculating sum
    int sum = 0;  
    for(i = 0; i < r; i++) {
        sum += arr[i][r - i - 1];
    }
    //display sum
    cout << "The sum of reverse diagonal of the matrix: " << sum << endl;
    return 0;
}
/*
OUTPUT:
Enter number of rows: 3
Enter number of columns: 3
Enter element arr00: 5
Enter element arr01: 6
Enter element arr02: 4
Enter element arr10: 8
Enter element arr11: 9
Enter element arr12: 7
Enter element arr20: 1 
Enter element arr21: 3
Enter element arr22: 2
5 6 4
8 9 7
1 3 2
The sum of reverse diagonal of the matrix: 14
*/
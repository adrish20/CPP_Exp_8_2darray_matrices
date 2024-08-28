//Adrish Purkayastha
//EnTC A
//PRN:23070123011
//C++ program to perform addition of two matrices
#include<iostream>
using namespace std;
int main() {
    int i, j, r1, c1, r2, c2;
    //enter rows and columns
    cout << "Enter number of rows of first matrix: ";
    cin >> r1;
    cout << "Enter number of columns of first matrix: ";
    cin >> c1; 
    cout << "Enter number of rows of second matrix: ";
    cin >> r2;
    cout << "Enter number of columns of second matrix: ";
    cin >> c2;
    if(r1 == r2 && c1 == c2) {
        int a[r1][c1];
        int b[r2][c2];
        int sum[r1][c1];
        //Enter elements of both matrices
        cout << "Enter elements of the first matrix:"<<endl;
        for(i=0; i<r1; i++) {
            for(j=0; j<c1; j++) {
                cout << "Element at (" << i+1 << ", " << j+1 << "): ";
                cin >> a[i][j];
            }
        }        
        cout << "Enter elements of the second matrix:" << endl;
        for(i=0; i<r2; i++) {
            for(j=0; j<c2; j++) {
                cout << "Element at (" << i+1 << ", " << j+1 << "): ";
                cin >> b[i][j];
            }
        }       
        //Calculate sum
        for(i=0; i<r1; i++) {
            for(j=0; j<c1; j++) {
                sum[i][j] = a[i][j] + b[i][j];
            }
        }       
        //Print result
        cout << "Summation of the matrices is: " << endl;
        for(i=0; i<r1; i++) {
            for(j=0; j<c1; j++) {
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    } 
    else {
        cout << "Addition cannot be performed" << endl;
    }  
    return 0;
}
/*
OUTPUT:
Enter number of rows of first matrix: 3
Enter number of columns of first matrix: 3
Enter number of rows of second matrix: 3
Enter number of columns of second matrix: 3
Enter elements of the first matrix:
Element at (1, 1): 1
Element at (1, 2): 2
Element at (1, 3): 3
Element at (2, 1): 4
Element at (2, 2): 5
Element at (2, 3): 6
Element at (3, 1): 7
Element at (3, 2): 8
Element at (3, 3): 9
Enter elements of the second matrix:
Element at (1, 1): 9
Element at (1, 2): 8
Element at (1, 3): 7
Element at (2, 1): 6
Element at (2, 2): 5
Element at (2, 3): 4
Element at (3, 1): 3
Element at (3, 2): 2
Element at (3, 3): 1
Summation of the matrices is:
10 10 10
10 10 10
10 10 10
*/

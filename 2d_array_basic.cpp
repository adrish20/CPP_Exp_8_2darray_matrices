//Adrish Purkayastha
//EnTC A
//PRN:23070123011
//C++ program to take elements as input of array and the print the array
#include<iostream>
using namespace std;
int main(){
    int i,j,r,c;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns: ";
    cin>>c;
    int arr[r][c];
    //taking elements as input for array
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"enter element a"<<i+1<<j+1<<": ";
            cin>>arr[i][j];
        }
    }
    //printing the array
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
            if(j==c-1){
            cout<<endl;
            }
        }
        
    }

}
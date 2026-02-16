// Array Traversal

#include<iostream>
using namespace std;

int main(){
    int size;

    cout<<"Enter the size of Array : ";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"Enter the element "<<i+1 <<": ";
        cin>>arr[i];
    }

    for(int i=0; i<size;i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}
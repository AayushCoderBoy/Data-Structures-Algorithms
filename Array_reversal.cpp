// Array reversal in C++

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start=0, end=size-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the elements "<<i+1<<" : ";
        cin>>arr[i];
    }
    

    reverseArray(arr, size);

    cout<<"Reversed Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
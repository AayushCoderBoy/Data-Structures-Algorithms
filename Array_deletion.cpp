// Array deletion : At beginning , At end , At any position

#include<iostream>

using namespace std;

int deleteAtBeginning(int arr[], int size){
    for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    return size-1;
}

int deleteAtEnd(int arr[], int size){
    return size-1;
}

int deleteAtPosition(int arr[], int size, int pos){
    for(int i=pos-1;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    return size-1;
}


int main(){
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"Original Array : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }

    int pos;
    cout<<"\nEnter the position of the element you want to delete : ";
    cin>>pos;

    if(pos>size || pos<=0){
        cout<<"Invalid Position to delete !";
        return 0;
    }

    if(pos==1){
        size=deleteAtBeginning(arr,size);
    }
    else if(pos==size){
        size=deleteAtEnd(arr,size);
    }
    else{
         size=deleteAtPosition(arr,size,pos);
    }

    cout<<"Array after deletion : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }

    return 0;
}
// Insertion in array : At the beginning, At the end, At any position

#include<iostream>

using namespace std;

int insertAtBeginning(int arr[], int size, int element){
    for(int i=size-1; i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=element;
    return size+1;
}

int insertAtEnd(int arr[], int size, int element){
    arr[size]=element;
    return size+1;
}

int insertAtPosition(int arr[], int size, int pos, int element){
    for(int i=size-1; i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=element;
    return size+1;
}

int  main(){

    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"Original Array :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }

    int pos, element;

    cout<<"\nEnter the position where you want to insert the elememt : ";
    cin>>pos;

    if(pos>size+1 || pos<=0){
        cout<<"Invalid Position !";
        return 0;
    }

    cout<<"Enter the element you want to insert : ";
    cin>>element;

    if(pos==1){
        size=insertAtBeginning(arr,size,element);
    }
    else if(pos==size+1){
        size=insertAtEnd(arr,size,element);
    }
    else{
        size=insertAtPosition(arr,size,pos,element);
    }

    cout<<"Array after insertion : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }

}

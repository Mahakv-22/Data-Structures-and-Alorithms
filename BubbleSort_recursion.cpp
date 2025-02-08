#include<iostream>
using namespace std;

void bubbleSort(int *arr , int size){

    //base case
    if(size == 0 || size == 1)
        return ;

    //ek case solve krliya - largest element ko end m pohcha dega
    for(int i =0 ;i<size-1;i++){
        if(arr[i] > arr[i+1])
            swap(arr[i] , arr[i+1]);
    }

    //recursive call
    bubbleSort(arr,size-1);
}

int main(){

    int arr[5] = {2,5,1,6,9};

    cout<<"Before swapping: "<<endl;
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    bubbleSort(arr,5);

    cout<<"After swapping: "<<endl;
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    return 0;
}
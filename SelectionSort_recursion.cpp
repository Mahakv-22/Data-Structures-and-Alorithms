#include<iostream>
using namespace std;

void selectionSort(int *arr , int size){

    //base case
    if(size == 0 || size == 1)
        return ;

    //processing
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }

    if (minIndex != 0)
        swap(arr[0], arr[minIndex]);

    //recursive call
    selectionSort(arr+1 , size - 1);
}

int main(){

    int arr[5] = {2,5,1,6,9};

    cout<<"Before swapping: "<<endl;
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    selectionSort(arr , 5);

    cout<<"After swapping: "<<endl;
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    return 0;
}
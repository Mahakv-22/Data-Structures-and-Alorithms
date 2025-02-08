#include<iostream>
using namespace std;

int partition(int *arr , int start , int end){

    int pivoeElement = arr[start];

    int count = 0;

    for(int i = start+1; i <= end ; i++){
        if(arr[i] <= pivoeElement)
            count++;
    }

    //Place pivot element at right position
    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);

    //left and right part after pivot index
    int i = start , j = end;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] < pivoeElement){
            i++;
        }

        while(arr[j] > pivoeElement){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex)
            swap(arr[i] , arr[j]);

        return pivotIndex;
    }
}

void quickSort(int *arr , int start , int end){
    
    if(start > end)
        return ;

    //partition in array
    int p = partition(arr , start , end);

    //left part sort karo
    quickSort(arr , start , p-1);

    //right part sort karo
    quickSort(arr , p+1 , end);
    
}

int main(){
    int arr[6] = {3,5,1,8,2,4};
    int n = 6;

    cout<<"Before swapping: "<<endl;
    for(int i = 0 ; i < 6 ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    quickSort(arr,0,n-1);

    cout<<"After swapping: "<<endl;
    for(int i = 0 ; i < 6 ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
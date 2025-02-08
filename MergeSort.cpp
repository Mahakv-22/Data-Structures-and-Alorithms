#include<iostream>
using namespace std;

void merge(int *arr , int s , int e){
    int mid = s + (e-s)/2;

    int left_size = mid - s + 1;
    int right_size = e - mid;

    //creating new array
    int *leftArray = new int[left_size];
    int *rightArray = new int[right_size];

    //copy values to left array
    int mainArrayIndex = s;
    for(int i = 0; i<left_size;i++){
        leftArray[i] = arr[mainArrayIndex++];
    }

    //copy values to right array
    mainArrayIndex = mid+1;
    for(int i = 0; i<right_size;i++){
        rightArray[i] = arr[mainArrayIndex++];
    }

    // cout<<"Left Array: "<<endl;
    // for(int i = 0 ; i < left_size ; i++){
    //     cout<<arr[i]<<"  ";
    // }
    // cout<<endl;

    //merge 2 sorted array
    int leftArrayIndex = 0 , rightArrayIndex = 0;
    mainArrayIndex = s;

    while(leftArrayIndex<left_size && rightArrayIndex<right_size){
        if(leftArray[leftArrayIndex] <= rightArray[rightArrayIndex]){
            arr[mainArrayIndex++] = leftArray[leftArrayIndex++];
        }
        else{
            arr[mainArrayIndex++] = rightArray[rightArrayIndex++];
        }
    }

    while(leftArrayIndex < left_size){
        arr[mainArrayIndex++] = leftArray[leftArrayIndex++];
    }

    while(rightArrayIndex < right_size){
        arr[mainArrayIndex++] = rightArray[rightArrayIndex++];
    }

    delete []leftArray;
    delete []rightArray;

}

void mergeSort(int *arr , int s , int e){

    //base case
    if(s>=e)
        return ;

    int mid = s + (e-s)/2;
    //left part ko sort krna hai
    mergeSort(arr , s , mid);

    //right part ko sort krna h 
    mergeSort(arr , mid+1 , e);

    //merge krna hai array ko
    merge(arr , s , e);
}

int main(){

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    cout<<"Before swapping: "<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    mergeSort(arr , 0 , n-1);

    cout<<"After swapping: "<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    return 0;
}
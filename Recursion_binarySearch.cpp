#include<iostream>
using namespace std;

int binarySearch(int *arr , int start , int end , int target){


    if(start > end){
        return -1;
    }
    int mid = start + (end - start)/2;

    if(arr[mid] == target)
        return mid;

    if(arr[mid] < target)
        return binarySearch(arr , mid+1 , end , target);

    if(arr[mid] > target)
        return binarySearch(arr , start , mid-1 , target);

}

int main(){

    int arr[6] = {2,4,6,10,14,16};
    int n = 6;
    int key = 10;
    cout<<"Present at:  "<< binarySearch(arr , 0 , 5 , key);

    return 0;
}
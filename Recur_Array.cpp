#include<iostream>
using namespace std;

bool isSorted(int arr[] , int size){

    // int i = 0;

    //base case
    if(size == 0 ||size == 1)
        return true;

    //processing
    if(arr[0] > arr[1]) 
        return false;
    else{
    //recursive call
        bool remainimgPart = isSorted(arr+1 , size-1);

        return remainimgPart;
    }
}

int main(){

    int arr[6] = {2,4,6,20,20,20};
    int size = 6;

    bool ans = isSorted(arr,6);

    if(ans){
        cout<<"The array is sorted"<<endl;
    }
    else{
        cout<<"The array is not sorted"<<endl;
    }

    return 0;
}
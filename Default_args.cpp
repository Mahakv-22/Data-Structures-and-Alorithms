#include<iostream>
using namespace std;

void print(int arr[] , int n , int start=0){
    //start ko default args bna diya by assigning its default value;
    //default args always starts with rightmost element in the function; i.e. it is right to left

    for(int i = start; i < n; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){

    int arr[5] = {1,4,7,8,9};
    int size = 5;

    print(arr , size);
    cout<<endl;
    print(arr , size , 2);

    return 0;
}
#include<iostream>
using namespace std;

int getSum(int arr[] , int size){

    //base case
    if(size == 0) 
        return 0;
    if(size == 1)
        return arr[0];


    int result = getSum(arr+1 , size-1);
    int sum = arr[0] + result;

    return sum;

}

int main(){

    int arr[5] = {1,2,3,4,5};
    int size = 5;

    int ans = getSum(arr , size);
    cout<<"Sum is: "<<ans;

    return 0;
}
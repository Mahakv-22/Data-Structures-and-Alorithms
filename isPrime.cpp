#include<iostream>
using namespace std;

int isSorted(int *arr , int n){
    //base case
    if(n==1 || n==0)
        return 1;
    
    if(arr[0] <= arr[1])
        return isSorted(arr+1,n-1);
    else{
        return 0;
    }

}

int main(){
    int arr[5] = {9,5,7,3,1};

    int ans = isSorted(arr, 5);

    cout<<ans;
}
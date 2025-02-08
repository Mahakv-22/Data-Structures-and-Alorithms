#include<iostream>
using namespace std;

int firstOccur(int arr[] , int n , int key){
    int start = 0 , end = n-1;
    int mid = start +(end-start)/2;
    int ans = -1;

    while(start<=end){

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else if(key<arr[mid]){
            end = mid - 1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}

int lastOccur(int arr[] , int n , int key){
    int start = 0 , end = n-1;
    int mid = start +(end-start)/2;
    int ans = -1;

    while(start<=end){

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else if(key<arr[mid]){
            end = mid - 1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}

int totalOccur(int arr[] , int n, int key){
    int s = firstOccur(arr , n, key);
    int e = lastOccur(arr , n , key);

    int total = (e - s) + 1;

    return total;
}

int main(){
    int even[5] = {1,2,3,3,5};

    cout<< " First Occurence Index: "<<firstOccur(even, 5 , 3)<<endl;
    cout<< " Last Occurence Index: "<<lastOccur(even, 5 , 3)<<endl;

    cout<<" Total Occurence of key: "<<totalOccur(even, 5, 3);

    return 0;
}
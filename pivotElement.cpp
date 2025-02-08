#include<iostream>
using namespace std;

int getPivot(int arr[], int n){

    int s =0 , e = n - 1;
    int mid = s + (e-s) / 2;
    
    while(s<e){
        if(arr[mid]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s) / 2;
    }
    return e;
}

int main(){
    int arr[5] = {3,8,13,17,1};

    cout<<"Pivot is: "<<getPivot(arr , 5)<<endl;

    return 0;
}
#include<iostream>
using namespace std;

bool linearSearch(int arr[] , int size , int target){

    //base condition
    if(size == 0)
        return false;

    if(arr[0] == target){
        return true;
    }
    else{
        return linearSearch(arr + 1 , size - 1 , target);
    }
}

int main(){

    int arr[6] = {2,4,6,20,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    bool ans = linearSearch(arr , n , 22);

    if(ans)
        cout<<"Element Found"<<endl;
    
    else
        cout<<"Element Not Found"<<endl;

    return 0;
}
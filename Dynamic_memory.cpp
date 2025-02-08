#include<iostream>
using namespace std;

int getSum(int *arr , int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
/*
    char ch = 'a';

    cout<<"Size of char: "<<sizeof(ch)<<endl;

    char *c = &ch;

    cout<<"Size of char pointer: "<<sizeof(c)<<endl;
*/

    int n;
    cin>>n;
// Variable size array
    int *arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = getSum(arr , n);

    cout<<"Answer: "<<ans;

    delete []arr;

    return 0;
}
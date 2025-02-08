#include<iostream>
using namespace std;

int factorial(int n){

    //base case
    if(n == 0)
        return 1;

    return n * factorial(n-1);
}

int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;

    int ans = factorial(n);

    cout<<ans;

    return 0;
}

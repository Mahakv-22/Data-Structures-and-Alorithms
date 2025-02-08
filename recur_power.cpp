//write basic code for c++ 
#include <iostream>
using namespace std;

int powerof(int a , int b){

    //base case
    if (b == 0) 
        return 1;

    if(b == 1)
        return a;

    int ans = powerof(a,b/2);

    //if poer is even
    if(b%2==0){
        return ans*ans;
    }
    else{
        //if power is odd
        return a*ans*ans;
    }
}

int main(){
    int a,b;

    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    int result = powerof(a , b);
    cout<<"The result is: "<<result<<endl;

    return 0;
}
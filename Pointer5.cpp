#include<iostream>
using namespace std;

void print(int *p){

    cout<<"Value: "<<*p<<endl;
    cout<<"Address: "<<p<<endl;

}

void update(int *p){
    // p = p + 1;  
    // cout<<"Inside: "<<p<<endl;

    *p = *p + 1;
}

int getSum(int *arr , int n){

    cout<<"Size of arr: "<<sizeof(arr)<<endl;

    int sum = 0;

    for(int i = 0;i<n;i++){
        sum += arr[i];
    }

    return sum;
}

int main(){
    /*
    int value = 5;
    int *p = &value;

    // print(p);

    //cout<<"Before Update: "<<p<<endl;
    cout<<"Before Update: "<<*p<<endl;

    update(p); //Another memory was created to update p in update method so it will print same value before and after unless p is not printed in the method itself.

    //But through this update function we can udate the value of p 

    //cout<<"After update: "<<p<<endl; 
    cout<<"After update: "<<*p<<endl; 

*/
    int arr[6] = {1,2,3,4,5,6};

    cout<<"Sum is: "<<getSum(arr+3,3)<<endl;


    return 0;
}

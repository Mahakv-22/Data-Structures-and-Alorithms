#include<iostream>
using namespace std;

int main(){

   // int arr[10] = {23,122,41,67};

    /*cout<<"Address of first memory block is: "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block is: "<<&arr[0]<<endl;

    cout<<"4th: "<<*arr<<endl;
    cout<<"5th: "<<*arr+1<<endl;
    cout<<"6th: "<<*(arr+1)<<endl;
    cout<<"7th: "<<*(arr)+1<<endl;
    cout<<"8th: "<<arr[2]<<endl;
    cout<<"9th: "<<*(arr+2)<<endl;

    int i = 3;
    cout<<i[arr]<<endl;
    

   int temp[10] = {1,2};
   cout<<"An array: "<<sizeof(temp)<<endl;
   cout<<"An array *: "<<sizeof(*temp)<<endl;
   cout<<"An array &: "<<sizeof(&temp)<<endl;

   int *ptr = &temp[10];
   cout<<"Pointer: "<<sizeof(ptr)<<endl;
   cout<<"Pointer *: "<<sizeof(*ptr)<<endl;
   cout<<"Pointer &: "<<sizeof(&ptr)<<endl;
    

   int a[20]={1,2,3,4};

   cout<<"address: "<<&a[0]<<endl;
//    cout<<"address: "<<&a<<endl;
//    cout<<"address: "<<a<<endl;

    int *p = &a[0];
    cout<<"Pointer: "<<p<<endl;
    cout<<"Pointer *: "<<*p<<endl;
    cout<<"Pointer &: "<<&p<<endl;
    */

    int arr[10];
    
    // arr = arr + 1; ERROR

    int *ptr = &arr[0];
    cout<< ptr <<endl;

    ptr = ptr + 1;
    cout<< ptr <<endl;

    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int num= 5;

    cout<<num<<endl;

    //address of variable - &

    cout<<"Address of num is: "<<&num<<endl;

    //Pointer

    int *ptr = &num;

    cout<<"Value of num is(*ptr): "<<*ptr<<endl;
    cout<<"Value of num is(ptr): "<<ptr<<endl;

    double d = 4.3;
    double *p = &d;

    cout<<"Value of d is(*p): "<<*p<<endl;
    cout<<"Value of d is(p): "<<p<<endl;

    cout<<"Size of integer is: "<<sizeof(num)<<endl;
    cout<<"Size of pointer ptr is: "<<sizeof(ptr)<<endl;
    cout<<"Size of pointer p is: "<<sizeof(p)<<endl;

    return 0;
}

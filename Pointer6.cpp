//DOUBLE POINTER

#include<iostream>
using namespace std;

void update(int **p){
   // p = p + 1;  //koi change nhi hoga
    // cout<<"Inside: "<<p<<endl;
   //  *p = *p + 1; //pointer k add m change hoga acc to data type

     **p = **p + 1; //value of i will get changed
}

int main(){

    int i = 5;
    int *ptr = &i;

    int **ptr2 = &ptr;

    cout<<"Code is running good"<<endl;

    cout<<endl;

    cout<<"printing ptr(address of i): "<<ptr<<endl;
    cout<<"address of ptr: "<<&ptr<<endl;
    cout<<"printing ptr (*ptr2 : double pointer): "<<*ptr2<<endl;

    cout<<endl;

    //Value at i
    cout<<"value of i: "<<i<<endl;
    cout<<"value of i (using pointer *ptr): "<<*ptr<<endl;
    cout<<"value of i (using double pointer **ptr2): "<<**ptr2<<endl;

    cout<<endl;

    //Address of i
    cout<<"Address of i: "<<&i<<endl;
    cout<<"Address of i (using pointer *ptr): "<<ptr<<endl;
    cout<<"Address of i (using double pointer **ptr): "<<*ptr2<<endl;

    cout<<endl;

    //Address of ptr
    cout<<"Address of ptr: "<<&ptr<<endl;
    cout<<"Address of ptr(using double pointer): "<<ptr2<<endl;

    cout<<endl;
    cout<<"before: "<<i<<endl;
    cout<<"before: "<<ptr<<endl;
    cout<<"before: "<<ptr2<<endl;

    update(ptr2);

    cout<<"after: "<<i<<endl;
    cout<<"after: "<<ptr<<endl;
    cout<<"after: "<<ptr2<<endl;

    return 0;
}
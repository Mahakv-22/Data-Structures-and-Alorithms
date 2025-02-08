#include<iostream>
using namespace std;

int main(){

    int num = 5;
    int a = num;
    a++;

    cout<<"a: "<<a<<endl;
    cout<<"num: "<<num<<endl;

    int *p = &num;
    // int b = *p;
    cout<<"Before: "<<num<<endl;

    (*p)++;

    cout<<"After: "<<num<<endl;

    cout<<"Copying a pointer: "<<endl;
    int *q = p;
    cout<< p << " - "<<q<<endl;
    cout<< *p << " - "<<*q<<endl;

    //important Concept

    int i = 3;
    int *t = &i;

    //cout<<(*t)++<<endl;

    *t = *t + 1;
    cout<<*t<<endl;

    cout<<"t before: "<<t<<endl;

    t = t + 1; //this statement will point the next address i.e if integer than (stored_address + sizeof(datatype) );
    cout<<"t : "<<t<<endl;

    return 0;
}
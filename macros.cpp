#include<iostream>
using namespace std;

//Global variable: pure program m kahi bhi use krsakte ho
int score = 15; 

#define PI 3.14 //Does not need extra memory

int main(){

    int r = 5;
    // double area = 3.14 * r * r;
    double area = PI * r * r;
    cout<<"area is: "<<area<<endl;

    cout<<score;

    return 0;
}
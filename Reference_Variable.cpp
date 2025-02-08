#include<iostream>
using namespace std;

void update(int n){
    n++;
}

void update2(int& n){
    cout<<"reference variable: "<<endl;
    n++;
}

// int& updatee(int n){  This is bad practice.
//     int a = 10;
//     int& ans = a;
//     return ans;
// }

int main(){
/*
    int i = 5;

    //create a refernce variable

    int& j = i;

    cout<<"i: "<<i<<endl;
    i++;
    cout<<"i: "<<i<<endl;
    j++;
    cout<<"i: "<<i<<endl;
*/

    int n = 5;
    cout<<"without refrence variable: "<<endl;
    cout<<"before: "<<n<<endl;

    update(n);

    cout<<"after: "<<n<<endl;

    cout<<"with refrence variable: "<<endl;

    cout<<"before: "<<n<<endl;

    update2(n);

    cout<<"after: "<<n<<endl;

    cout<<"Return by reference variable: "<<endl;

    // updatee(n);

    return 0;
}
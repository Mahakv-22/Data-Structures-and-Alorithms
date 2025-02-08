#include<iostream>
using namespace std;

int main(){

    int first = 8;
    // int second = 18;
    int *ptr = &first;
    int *q = ptr;
    (*q)++;
    cout<<first<<" "<<endl;   

    return 0;
}

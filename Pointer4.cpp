#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};

    char ch[6] = "abcde";

    cout<<"Array: "<<arr<<endl;

    cout<<"Char array: "<<ch<<endl;

    int *p = &arr[0];
    cout<<"array pointer: "<<p<<endl;
    
    char *c = &ch[0];
    cout<<"char pointer: "<<c<<endl;

    char temp = 'z';
    char *ptr = &temp;
    cout<<"Char Array without null char: "<<ptr<<endl;

    return 0;
}


/*
char ch[6] = "abcde";
BTS: 
temp memory mili <- usme abcde\0 store hua
memory m ch -> copy 

char *c = "abcde";  // kabhi nhi krna
temp memory mili <- usme abcde store hua suppose a ka address h 720
*c will access memory location 720 which is very risky;
*/
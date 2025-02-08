#include<iostream>
using namespace std;

int getLength(char string[]){
    int count = 0;
    for(int i = 0 ; string[i] !='\0' ; i++){
        count ++;
    }
    return count;
}

void reverse(char str[] , int i , int j){

    //base case
    if(i >= j){
        return ;
    }

    swap(str[i] , str[j]);
    i++;
    j--;

    //recursive call
    reverse(str , i , j);
}

int main(){

    char string[20];

    cout<<"Enter your name: ";
    cin>>string;

    int len = getLength(string);

    cout<<"Your string is: "<<string<<endl;

    reverse(string , 0 , len-1);

    cout<<"Your string is: "<<string<<endl;

    return 0;
}
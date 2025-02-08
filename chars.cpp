#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i = 0 ; name[i] !='\0' ; i++){
        count ++;
    }
    return count;
}

int main(){
    char name[20];

    cout<<"Enter your name: ";
//    cin>>name;
    cin.getline(name , 20); //To get full line as input.
    cout<<"Your name is: "<<name<<endl;
    cout<<"Lenght of String: "<<getLength(name)<<endl;


    return 0;
}
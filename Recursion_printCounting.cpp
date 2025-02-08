/*
#include<iostream>
using namespace std;

void print(int n){
    
    //base condition
    if(n==0)
        return ;
    
    cout<< n <<endl;

    print(n-1);
}

int main(){

    int n;
    cout<<"enter a number: "<<endl;
    cin>>n;

    cout<<endl;
    
    print(n);

    return 0;
}
*/

#include<iostream>
using namespace std;

void print(int n){
    if(n > 0){ // base condition
        print(n-1); // recursive call
        cout << n << endl; // print after recursive call
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;
    print(n);
    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int n , m;
    cout<<"Enter number of rows: "<<endl;
    cin>>n;

    cout<<"Enter number of coloums: "<<endl;
    cin>>m;

    int **arr = new int *[n];

    for(int i=0;i<n;i++){
        arr[i] = new int[m];
    }

    cout<<endl;

    cout<<"enter elements in array: "<<endl;
    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;

    cout<<"elements are: "<<endl;
    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Releasing Memory from the heap:
    for(int i=0; i<n;i++){
        delete []arr[i];
    }

    delete []arr;

    return 0;
}
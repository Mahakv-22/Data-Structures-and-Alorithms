#include<iostream>
using namespace std;

bool isPresent(int a[][4] , int x , int n , int m){
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == x){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][4];

    cout<<"Enter elements: "<<endl;
     for(int i = 0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Elements are: "<<endl;
    for(int i = 0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element to search: ";
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"Element Found!! "<<endl;
    }
    else{
        cout<<"Not found!!"<<endl;
    }

    return 0;
}
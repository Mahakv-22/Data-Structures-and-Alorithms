// #include <bits/stdc++.h> 
#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{   
    for(int i = 0; i < n-1; i++){
        int minIndex = i;

        for(int j = i+1 ; j<n;j++){

            if(arr[j]<arr[minIndex])
                minIndex = j;
            
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main(){
    int n;
    int arr[100];

    cout<<"Enter size of array: "<<endl;
    cin>>n;

    cout<<"Enter elements in the array: "<<endl;
    for(int i = 0 ; i<n ; i++ ){
        cin>>arr[i];
    }
    //int arr[5] = {5,6,9,8,7};

    selectionSort(arr , n);

    cout << "Sorted array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
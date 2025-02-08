#include<iostream>

using namespace std;

void bubbleSort(int arr[], int n){   
    for(int i=1;i<n;i++){

        for(int j= 0; j<n-i;j++){

            if(arr[j]>arr[j+1]){
                
                swap(arr[j] , arr[j+1]);
            }
        }
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

    bubbleSort(arr , n);

    cout << "Sorted array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
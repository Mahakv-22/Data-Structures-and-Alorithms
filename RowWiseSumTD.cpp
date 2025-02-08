#include<iostream>
using namespace std;

void printSumRow(int a[][4] , int n , int m){
    cout<<"Printing row's sum: "<<endl;
    for(int i = 0;i<3;i++){
        int sum = 0;
        for(int j=0;j<4;j++){
            sum += a[i][j];
        }
        cout<<"Sum of "<<i+1<<"th row is: "<<sum<<endl;
    }
}

void printSumCol(int a[][4] , int n , int m){
    cout<<"Printing coloum's sum: "<<endl;
    for(int j = 0;j<4;j++){
        int sum = 0;
        for(int i=0;i<3;i++){
            sum += a[i][j];
        }
        cout<<"Sum of "<<j+1<<"th coloum is: "<<sum<<endl;
    }
}

int largetRowSum(int a[][4] , int n , int m){
    int maxi = INT16_MIN;
    int rowIndex = -1;

    for(int i = 0;i<3;i++){
        int sum = 0;
        for(int j=0;j<4;j++){
            sum += a[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i+1;
        }
        //return rowIndex;
    }
    cout<<"The maximum sum is: "<<maxi<<endl;
    return rowIndex;
}

int main(){
    int arr[3][4];

    cout<<"Enter elements: "<<endl;
     for(int i = 0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Elements in row wise order are: "<<endl;
    for(int i = 0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Elements in coloum wise order are: "<<endl;
    for(int j = 0;j<4;j++){
        for(int i=0;i<3;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printSumRow(arr , 3 , 4);
    printSumCol(arr , 3 , 4);
    int ansIndex = largetRowSum(arr , 3 , 4);
    cout<<"Max Sum of Row number: "<<ansIndex;

    return 0;
}
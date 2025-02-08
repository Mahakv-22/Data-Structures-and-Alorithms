#include <iostream>
#include<vector>
using namespace std;

int maximumWeightRow(int n, int m, int mat[]) {
    // Write your code here.
    int ans = 0;
    
    for(int i = 0;i<n;i++){
        int sum = 0;
        for(int j = 0 ; j < m ; j++){
            sum += mat[i][j]; 
        }
        if(ans<sum){
            ans = sum;
        }
    }
    return ans;
}

int main(){
    int arr[2][3] = [[1, 2, 3] [2, 0, 0]];

    int res = maximumWeightRow(2,3,arr[][3]);
    cout<<res;
}
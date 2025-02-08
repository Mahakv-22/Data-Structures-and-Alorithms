#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std; 

bool isSafe(int x, int y, int n, vector < vector < int >> visited, vector < vector < int >> & arr){

    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y] == 0 && arr[x][y] == 1){
        return true;
    }
    else{
        return false;
    }
}

void solve(vector < vector < int >> & arr, int n,vector < string >& ans, int x, int y, vector < vector < int >> &visited, string path){
    
    //base case
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    //4 choices - D, R, U, L

    //down
    int newx = x + 1;
    int newy = y;

    if(isSafe(newx, newy, n, visited, arr)){
        path.push_back('D');
        solve(arr,n,ans,newx,newy,visited,path);
        path.pop_back();
    }

    //right
    newx = x;
    newy = y + 1;

    if(isSafe(newx, newy, n, visited, arr)){
        path.push_back('R');
        solve(arr,n,ans,newx,newy,visited,path);
        path.pop_back();
    }

    //up
    newx = x - 1;
    newy = y;

    if(isSafe(newx, newy, n, visited, arr)){
        path.push_back('U');
        solve(arr,n,ans,newx,newy,visited,path);
        path.pop_back();
    }

    //left
    newx = x;
    newy = y - 1;

    if(isSafe(newx, newy, n, visited, arr)){
        path.push_back('L');
        solve(arr,n,ans,newx,newy,visited,path);
        path.pop_back();
    }

    visited[x][y] = 0;
}

vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    // Write your code here.
    vector < string > ans;

    if(arr[0][0] == 0)
        return ans;

    int srcx = 0;
    int srcy = 0;
    
    vector < vector < int >> visited = arr;
    //visited array ko 0 ko initiallize karo
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            visited[i][j] = 0;
        }
    }

    string path = "";
    solve(arr,n,ans,srcx,srcy,visited,path);
    sort(ans.begin() , ans.end());

    return ans;
}
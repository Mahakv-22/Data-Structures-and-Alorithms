#include<iostream>
using namespace std;

char getMaxOccurChar(string s){
    int arr[26] = {0};

    //Create array of count
    for(int i = 0; i<s.length() ; i++){
        char ch = s[i];
        //lower case
        int number = 0;
        if(ch>='a' && ch<='z'){
            number = ch - 'a';
        }
        else{
            number = ch - 'A';
        }
        arr[number]++;
    }
    //find maximum occuring character
    int maxi = -1 , ans = 0;
    for(int i = 0;i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a'+ans;
    return finalAns;
}

int main(){

    string s;
    cout<<"Enter a word: "<<endl;
    cin>>s;

    cout<<"Maximum Character: "<<getMaxOccurChar(s);

    return 0;
}
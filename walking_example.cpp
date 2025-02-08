#include<iostream>
using namespace std;

void reachHome(int src , int des){

    cout<<"source " <<src<<" destination "<<des<<endl;
    //base case
    if(src == des){
        cout<<"pohoch gya"<<endl;
        return ;
    }

    src++;

    reachHome(src , des);
}

int main(){

    int des = 10;
    int src = 1;

    reachHome(src , des);

    return 0;
}

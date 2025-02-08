#include<iostream>
using namespace std;

int main(){
    int duration;
    int temp = 0;
    double avg; // Changed to double for accurate average

    for(int i=0;i<7;i++){
        cin>>duration;
        temp += duration; // Moved inside the loop
    }
    
    cout<<"Total duration: "<<temp<<endl;

    avg = (double)temp/7; // Cast to double for accurate division
    cout<<"Average duration: "<<avg<<endl;

    return 0;
}
#include<iostream>
using namespace std;

class Animal {
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog {

    public:
    void bark(){
        cout<<"Barking..."<<endl;
    }
};

class GermanShephered : public Animal , public Dog{

};


int main(){

    GermanShephered g;
    g.speak();
    g.bark();

    return 0;
}
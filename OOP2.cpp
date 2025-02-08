#include<iostream>
using namespace std;
#include"OOP_test.cpp"

int Hero::count = 10;

int main(){

    cout<<"Static member: "<<Hero::count<<endl;

    /*Shallow and Deep Copy:
    Shallow Copy: In shallow copy, the copy constructor creates a new object and then copies.
    Shallow Copy: Copies the address of the object to another object. It is used by default by the default copy constructor.*/


    // Create an instance of the class
    Hero hero1;
    hero1.setHealth(12);
    hero1.level = 'D';
    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();
    cout<<endl;

    //Use default copy constructor 
    Hero hero2 = hero1; //Hero hero2(hero1);
    hero2.print();
    cout<<endl;

    hero1.name[0] = 'G';
    cout<<"Hero1"<<endl;
    hero1.print();
    cout<<endl;

    cout<<"Hero2"<<endl;
    hero2.print();
    cout<<endl;

    /*Copy Assignment Operator: Copies values of one object to another. It is used to copy the values of one object to another object. It is used by default by the default assignment operator. 
    */  

    hero1 = hero2;

    cout<<"Hero1"<<endl;
    hero1.print();
    cout<<endl;

    cout<<"Hero2"<<endl;
    hero2.print();
    cout<<endl;

    cout<<"Static Allocation"<<endl;
    cout<<endl;
    Hero a;    //Destructor will be called automatically.

    cout<<endl;
    cout<<"Dynamic Allocation"<<endl;
    cout<<endl;
    Hero *b = new Hero; //Destructor needs to be called manually.
    cout<<endl;
    delete b;
    cout<<endl;

    return 0;
}
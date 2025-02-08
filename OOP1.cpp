#include<iostream>
#include <cstring>
using namespace std;
// #include"OOP_test.cpp"


class Hero {

    //properties:

    /*Access Modifiers: Public, Private and Protected
    All data members or properties of class are set to private by default
    */
    private:
    int health;
    public:
    char *name;
    char level;

    void print(){
       // cout<< health << endl; //health can be used inside the class as it is a private data member. But it cannot be used outside the class.

        cout<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Health: "<<this->health << endl; //health can be used inside the class as it is a private data member. But it cannot be used outside the class.
        cout<<"Level: "<<this->level<<endl;
    }

    /*Getter and Setter: methods to access private data members outside the class.

    Getter -> fetch or read the private data members.
    Setter -> use to apply some conditions to private data members
    */

    //To access the health 
    int getHealth(){    //to fetch the health
        return health;
    }

    void setHealth(int h){  //To set the health to some value.
        health = h;
    }

    /*Constructor:
    A constructor is a special method that is called when an object of a class is created.
    It is used to initialize the data members of the class.
    */
    Hero(){
        cout<<"Constructoe called"<<endl;
        name = new char[100];
    }

    /*
    Parameterized Constructor:
    A parameterized constructor is a constructor that takes arguments.
    It is used to initialize the data members of the class with the values passed as arguments.


    This keyword:
    The this keyword is a pointer to the current object of the class.
    It is used to access the members of the class.
    */

    Hero(int health){
       // cout<<"Address of this-> "<< this<<endl;
        this->health = health; //this keyword is used to access the health data member of the
    }

    Hero(int health , char level){
        this->level = level; 
        this->health = health; 
    }

    //Copy Constructor:
    Hero(Hero &temp){
        cout<<"Copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    //Shallow and Deep Copy:
    //Shallow Copy: In shallow copy, the copy constructor creates a new object and then copies
    void setName(char name[]){
        strcpy(this->name , name);
    }
};

int main(){

    /*
    //creating a object of Hero class
    Hero h1;

    cout<<"Size of hero class: "<<sizeof(h1)<<endl;

   // cout<<"Helath is: "<<h1.health<<endl;   This will give error because you cannot access private data  member directly outside the class.

    h1.level = 'A';
    cout<<"Level is: "<<h1.level<<endl; //Accessing public data member directly through dot"." operator.

    /*To access private data member: use gatter and setter methods: using dot oeratoe to access getter ans setter.
    /

    h1.setHealth(80);
    cout<<"Health is: "<<h1.getHealth()<<endl;

    */

   //Static and Dynamic Allocation of an object of class:

    // Static allocation
    //Hero h2;  Here, memory is allocated at compile time.

    cout<< endl;

    Hero ramesh(10);
    cout<<"Address of ramesh: "<<&ramesh<<endl;
    cout<<"Health ramesh: "<<ramesh.getHealth()<<endl;;

    cout<<endl;

    Hero abc(11 , 'X');
    cout<<"Health abc: "<<abc.getHealth()<<endl;
    cout<<"Lavel abc: "<<abc.level<<endl;

    cout<<endl;

    //Copy constructor: By default created. Copies a value of constructor to another object
    Hero abc1(abc);
    cout<<"Health abc1: "<<abc1.getHealth()<<endl;
    cout<<"Lavel abc1: "<<abc1.level<<endl;

    cout<<endl;
    

    cout<<"Static Allocation"<<endl;
    Hero a; 

    a.level = 'A';
    cout<<"Level is: "<<a.level<<endl;
    a.setHealth(70);
    cout<<"Health is: "<<a.getHealth()<<endl;

    cout<<endl;
    //Dynamic Allocation:
    //Here, memory is allocated at runtime.

    cout<<"Dynamic Allocation"<<endl;
     Hero *b = new Hero;

    /*To access dynamic aloocation of object: (pointer).property
    There are two ways:
    1. using dot oerator " . " to access dynamic aloocation of object.
    2. using arrow " -> " to access dynamic aloocation of object.
    */

    (*b).level = 'B';
    cout<<"Level is: "<<(*b).level<<endl;
    (*b).setHealth(80);
    cout<<"Health is: "<<(*b).getHealth()<<endl;

    //       OR
    cout<<endl;
    
    b->level = 'B';
    cout<<"Level is: "<<b->level<<endl;
    b->setHealth(80);
    cout<<"Health is: "<<b->getHealth()<<endl;

    //Shallow and Deep Copy:
    //Shallow Copy: Copies the address of the object to another object.
    cout<<"Shallow and Deep Copy: "<<endl<<"[";
    Hero hero1;
    hero1.setHealth(12);
    hero1.level = 'D';
    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();
    cout<<"]";

    return 0;
}
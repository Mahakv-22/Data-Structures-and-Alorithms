#include <cstring>

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

    //Static keyword: Static members are shared by all objects of the class. To access static member of the class there is no need to create the object. 

    static int count;


    void print(){
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
        //Deep Copy: phle wale array ki copy bna k usko input m bhjna.
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout<<"Copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    //Shallow and Deep Copy:
    //Shallow Copy: 
    //In shallow copy, the copy constructor creates a new object and copies the address of the original object to the new object. Both the objects point to the same memory location.

    void setName(char name[]) { // Fix the typo here
    strcpy(this->name, name);
    }

    /*Destructor:
    //A destructor is a special member function of a class that is automatically called when an object of that class is destroyed. i.e. memory deallocation. Denoted by ~class_name(){code}

    Note: Static Allocation of object k liye destructor automatically called hota h. But not for dynamic Allocation of object. You have to call dynamically if object is declared dynamically.
    Manually destructor call:  using delete keyword
    i.e.   delete object_name; ex - delete hero1;

    1. same name as class
    2. has no return type.
    3. has no input parameter.
    */

   ~Hero(){
    cout<<"Destructor called"<<endl;
   }

};
#include <iostream>
using namespace std;

class Human{

    public:
    int height;
    int weight;
    private:
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

// class Male : public Human{
//class Male : protected Human{
class Male : private Human{

    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }

    int getHeight(){
        return this->height;
    }
};


int main()
{

    Male m1;

    // cout<<m1.height; //accessed with public access modifier

    cout<<m1.getHeight(); //accessed with private access modifier

    /*
    Male m;
    cout<<"Age: "<<m.age<<endl;
    cout<<"Weight: "<<m.weight<<endl;
    cout<<"Height: "<<m.height<<endl;

    cout<<"color: "<<m.color<<endl;
    m.sleep();
    m.setWeight(85);
    cout<<"Weight: "<<m.weight<<endl;
    */

    return 0;
}
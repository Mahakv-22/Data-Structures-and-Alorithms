#include <iostream>
using namespace std;

//What is encapsulation?
//Encapsulation is a fundamental concept in object-oriented programming (OOP) that binds together the data(data member and the functions)


class student
{

private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{

    student first;

    cout << "sab sahi chal rha hai" << endl;

    return 0;
}
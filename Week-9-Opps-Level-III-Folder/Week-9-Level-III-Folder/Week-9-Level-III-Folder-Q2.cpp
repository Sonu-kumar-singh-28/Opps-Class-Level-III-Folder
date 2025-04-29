#include<iostream>
using namespace std;

class Animal{
    public:
    void speak()
    {
        cout<< " I am in the base class "<< endl;
    }
};

class Dog:public Animal{
    public:
    void speak()
    {
        cout<<" I am in the derived class " << endl;
    }
};

int main()
{
    Dog d1;
    d1.speak();
}
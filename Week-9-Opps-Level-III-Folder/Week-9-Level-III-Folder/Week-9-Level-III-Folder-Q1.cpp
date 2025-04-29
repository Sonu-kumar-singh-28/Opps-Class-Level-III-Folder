// run time polmorphism 
#include<iostream>
using namespace std;

class Animal{


    public:

    Animal()
    {
        cout<<" i am inside Animal constructor"<< endl;
    }

    void speak()
    {
        cout<<"Speaking" << endl;
    }
};

class Dog : public Animal{
    // override 
    public:

    Dog()
    {
        cout<<" i am inside Dog constructor" << endl;
    }

    void speak()
    {
        cout<<"Barking" <<endl;
    }
};

int main()
{
    // Dog d1;
    // d1.speak();


    // Animal* a = new Animal;

    // a->speak();

    // Dog* a = new Dog;
    // a->speak();


    // upcasting
    // Animal* a = new Dog();
    // a->speak();

    // Dog* d = (Dog*) new Animal();
    // d->speak();

   // Animal* a = new Animal;

    Animal *a = new Dog;
}
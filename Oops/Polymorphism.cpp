#include <iostream>
using namespace std;

//---------------------------------------Polymorphism in C++
//Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.
//Like we specified in the previous chapter; Inheritance allows us to define a class (derived class) based on another class (base class).
//Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.


//----------------------------------------Why Use Virtual Functions?
//Without virtual, C++ decides which function to call based on the pointer type, not the actual object type.
//With virtual, it checks the actual object the pointer is pointing to.

//Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

//Derived class Dog
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

//Derived class Cat
class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows" << endl;
    }
};

int main() {

    Animal* animalPtr; //Base class pointer
    Dog dog;
    Cat cat;
    animalPtr = &dog;
    animalPtr->sound(); // Outputs: Dog barks
    animalPtr = &cat;
    animalPtr->sound(); // Outputs: Cat meows   

    

    return 0;
}
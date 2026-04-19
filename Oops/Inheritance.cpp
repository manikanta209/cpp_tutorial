#include <iostream>

using namespace std;

//Inheritance in C++
//Inheritance is a way to form new classes using classes that have already been defined.
//The new classes, known as derived classes, inherit attributes and behavior (methods) from the base classes, allowing for code reusability and the creation of hierarchical relationships between classes.

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};
// Derived class
class Dog : public Animal { // Dog inherits from Animal
public:
    void bark() {
        cout << "The dog barks." << endl;
    }


};


//------------------------------Mulilevel Inheritance example
//A class can also be derived from one class, which is already derived from another class.

//Base class
class Base1 {
public:
    void display1() {
        cout << "Base1 display function called." << endl;
    }
};  

//Derived class from Base1
class Base2 : public Base1 {
public:
    void display2() {
        cout << "Base2 display function called." << endl;
    }
};

class DerivedMultiLevel : public Base2 {
public:
    void display3() {
        cout << "DerivedMultiLevel display function called." << endl;
    }
};



//Multiple Inheritance example
class BaseA {  //Base class A
public:
    void funcA() {
        cout << "Function of BaseA called." << endl;
    }
};

class BaseB { //BaseBase class B
public:
    void funcB() {
        cout << "Function of BaseB called." << endl;
    }
};

class DerivedMultiple : public BaseA, public BaseB { //Derived class inheriting from BaseA and BaseB
public:
    void funcDerived() {
        cout << "Function of DerivedMultiple called." << endl;
    }
};



int main(int argc, char const *argv[])
{
 Animal animal;
    Dog dog;
    animal.eat(); // Calling method from base class
    dog.eat();    // Calling inherited method from base class
    dog.bark();   // Calling method from derived class


    //----------------------------------Multilevel Inheritance
    DerivedMultiLevel multiLevelObj;
    multiLevelObj.display1(); // From Base1
    multiLevelObj.display2(); // From Base2
    multiLevelObj.display3(); // From DerivedMultiLevel

    //----------------------------------Multiple Inheritance
    DerivedMultiple multiDerivedObj;
    multiDerivedObj.funcA();        // From BaseA
    multiDerivedObj.funcB();        // From BaseB
    multiDerivedObj.funcDerived();  // From DerivedMultiple
    
    return 0;
}

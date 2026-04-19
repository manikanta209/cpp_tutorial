#include <iostream>
using namespace std;

//---------------------------------------Constructors in C++
//Constructors are special member functions that are automatically called when an object of a class is created


//Default Constructor Example
class Car{
public:
    Car(){
        cout << "Car object created!" << endl;
    }
};

//Parameterized Constructor Example
class Person {
    string name;
    int age;
public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {
        cout << "Constructor called for " << name << endl;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

//Implicit vs Explicit Constructor Example
//Implicit - a constructor that is automatically called by the compiler when an object is created,
//it may also be invoked if the user passes arguments that would be convertible into the constructor's parameters
//Explicit - a constructor that cannot be called implicitly, it must be invoked explicitly by the user

class MyClass {
    int value;
public:
    // Implicit constructor (allows implicit conversion)
    MyClass(int v) : value(v) {}
    
    int getValue() const { return value; }
};

void printValue(const MyClass& obj) {
    std::cout << obj.getValue() << std::endl;
}

class MyExplicitClass {
    int value;
public:
    // Explicit constructor (prevents implicit conversion)
    explicit MyExplicitClass(int v) : value(v) {}

    int getValue() const { return value; }
};

void printExplicitValue(const MyExplicitClass& obj) {
    std::cout << obj.getValue() << std::endl;
};

int main() {
    // Creating objects of Person class
    Person person1("Alice", 30);
    Person person2("Bob", 25);

    // Displaying information
    person1.display();
    person2.display();

    //Implicit
    MyClass obj1(42);     // Direct initialization - OK
    MyClass obj2 = 42;    // Copy initialization - Implicit conversion! 
    printValue(100);      // Implicit conversion from int to MyClass!
    // 100 is implicitly converted to MyClass(100)

    //Explicit
    MyExplicitClass obj3(42);      // Direct initialization - OK
    //MyExplicitClass obj4 = 42;   // Copy initialization - ERROR: no implicit conversion allowed
    // printValue(100);    // ERROR: No implicit conversion allowed
    printExplicitValue(MyExplicitClass(100)); // Explicit conversion
    // Must explicitly create MyExplicitClass object
    printExplicitValue(static_cast<MyExplicitClass>(100)); // Another way to explicitly convert


    return 0;
}
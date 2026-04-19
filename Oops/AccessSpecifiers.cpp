#include <iostream>

using namespace std;

//---------------------------------------Access Specifiers in C++
class Box {
public: //public access specifier
    double length; //accessible from outside the class

    void setWidth(double w); //method declaration

private: //private access specifier
    double width; //not accessible from outside the class   
};

//Method to set width, defined outside the class
void Box::setWidth(double w) {
    width = w;
}

//Protected access specifier
class Base {
protected:
    int protectedVar; //accessible in derived classes
};


class Derived : public Base {
public:
    void setProtectedVar(int val) {
        protectedVar = val; //OK: accessible in derived class
    }
};

int main() {
    Box box;

    // Accessing public member
    box.length = 10.0; // OK

    // Accessing private member
    // box.width = 5.0; // Error: 'width' is private within this context

    box.setWidth(5.0); // OK: using public method to set private member

    cout << "Box length: " << box.length << endl;
    // Note: We cannot directly access box.width here

    // Demonstrating protected access
    Derived derivedObj;
    derivedObj.setProtectedVar(15); // OK: accessing protected member via derived class method
     
    return 0;
}
//---------------------------------------End of Access Specifiers example
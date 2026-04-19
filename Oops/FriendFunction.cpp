#include <iostream>

using namespace std;

//---------------------------------------Friend Functions in C++
//A friend function is a function that is not a member of a class but has access to its private and protected members.
//To declare a friend function, use the keyword 'friend' inside the class definition.


class Box {
private:
    double width; //private data member

public:
    Box(double w){
        width = w;
    } //constructor to initialize width
    
    // Declare friend function
    friend void printWidth(Box box);
};

// Friend function definition 
void printWidth(Box box) {
    cout << "Width of box: " << box.width << endl; //accessing private member
}


/* Another example of friend function
class ClassName {
private:
    int privateData;
    
public:
    friend void friendFunction(ClassName obj);  // Declaration
};

void friendFunction(ClassName obj) {
    // Can access obj.privateData
    cout << obj.privateData;  // Allowed!
}
*/


//Operator overloading can also be done using friend functions

class Sample {
private:
    int data;
public:
    Sample(int val) : data(val) {}
    
    // Overload + operator using friend function
    friend Sample operator+(const Sample& s1, const Sample& s2);
};

Sample operator+(const Sample& s1, const Sample& s2) {
    return Sample(s1.data + s2.data);
}


int main() {
    Box box(10.0);

    // Call friend function
    printWidth(box);

    // Demonstrate operator overloading using friend function
    Sample obj1(5);
    Sample obj2(10);
    Sample obj3 = obj1 + obj2; // uses overloaded + operator
    return 0;
}
//---------------------------------------End of Friend Functions example
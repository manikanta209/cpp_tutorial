#include <iostream>
using namespace std;

//Interfaces in C++
//An interface in C++ is a class that contains only pure virtual functions.
//Interfaces define a contract that derived classes must adhere to by implementing the pure virtual functions.
//A class is made abstract by declaring at least one of its functions as pure virtual function. 
//A pure virtual function is specified by placing "= 0" in its declaration

class IShape {
public:
    // Pure virtual function for calculating area
    virtual double area() const = 0;

    // Pure virtual function for calculating perimeter
    virtual double perimeter() const = 0;

    // Virtual destructor
    virtual ~IShape() {}
};

// Circle class implementing IShape interface
class Circle : public IShape {
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14159 * radius;
    }
};

// Rectangle class implementing IShape interface
class Rectangle : public IShape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
    double perimeter() const override {
        return 2 * (width + height);
    }
};

int main() {
    IShape* circle = new Circle(5.0);
    IShape* rectangle = new Rectangle(4.0, 6.0);

    cout << "Circle Area: " << circle->area() << endl;
    cout << "Circle Perimeter: " << circle->perimeter() << endl;

    cout << "Rectangle Area: " << rectangle->area() << endl;
    cout << "Rectangle Perimeter: " << rectangle->perimeter() << endl;

    delete circle;
    delete rectangle;

    return 0;
}
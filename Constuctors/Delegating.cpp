#include <iostream>
using namespace std;

//--Delegating Constructors in C++
//Delegating constructors is a feature that simplifies the way constructors in a class handle the initialization task
//It makes it easier to maintain object initialization by reducing redundancy, and by allowing one constructor to call another in the same class.
//Delegating constructors allow a constructor to call another constructor in the same class to reuse code and avoid duplication.
//Here Point(0,0) and Point(x,0) delegate to the primary constructor Point(int x, int y).

class Point {
    int x, y;
public:
    // Primary constructor
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {
        cout << "Primary constructor called: (" << x << ", " << y << ")" << endl;
    }
    
    // Delegating constructor for origin
    Point() : Point(0, 0) { // Delegates to the primary constructor
        cout << "Delegating constructor called for origin." << endl;
    }
    
    // Delegating constructor for point on X-axis
    Point(int xCoord) : Point(xCoord, 0) { // Delegates to the primary constructor
        cout << "Delegating constructor called for point on X-axis: (" << x << ", 0)" << endl;
    }
    
    void display() {
        cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // Using primary constructor
    Point p1(3, 4);
    p1.display();
    
    // Using delegating constructor for origin
    Point p2;
    p2.display();
    
    // Using delegating constructor for point on X-axis
    Point p3(5);
    p3.display();
    
    return 0;
}
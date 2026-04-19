#include <iostream>
#include <string>
#include <algorithm>

//---------------------------------------Templates in C++
//Templates allow you to write generic and reusable code. They enable functions and classes to operate with any data type.


// Function Template
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}


// Class Template
template <typename T>
class Box {
    T value;
public:
    Box(T v) : value(v) {}
    T getValue() { return value; }
};

int main() {
    // Using Function Template
    std::cout << "Max of 3 and 7: " << max(3, 7) << std::endl;           // Works with int
    std::cout << "Max of 3.5 and 2.5: " << max(3.5, 2.5) << std::endl;   // Works with double
    std::cout << "Max of 'A' and 'B': " << max('A', 'B') << std::endl;   // Works with char

    // Using Class Template
    Box<int> intBox(123);
    Box<std::string> strBox("Hello, Templates!");

    std::cout << "Integer Box Value: " << intBox.getValue() << std::endl;
    std::cout << "String Box Value: " << strBox.getValue() << std::endl;

    return 0;
}
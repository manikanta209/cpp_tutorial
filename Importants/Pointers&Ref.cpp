#include <iostream>
using namespace std;

/*
For: const int* p (pointer to const int)
     ┌─────┬─────┐
p →  │  &x │     │
     └─────┴─────┘
          ↓
     ┌─────┐
     │  10 │ x  ← Can modify x directly, but not through p
     └─────┘
     
For: int* const p (const pointer to int)
     ┌─────┬─────┐
p →  │  &x │     │  ← p itself is locked to &x
     └─────┴─────┘
          ↓
     ┌─────┐
     │  10 │ x  ← Can modify through p
     
*/
//---------------------------------------Pointers and References in C++
//Pointers are variables that store memory addresses of other variables.
//References are aliases for existing variables, providing an alternative name for the same memory location.

int main(){
        int value = 42;      // A regular integer variable
        int* ptr = &value;   // ptr stores the MEMORY ADDRESS of value

        // Dereferencing: accessing the value at the address
        std::cout << *ptr;  // Prints: 42

        // Modifying through pointer
        *ptr = 100;          // Changes 'value' to 100
        std::cout << value; // Prints: 100

        // References
        int& ref = value;   // ref is a REFERENCE (alias) to value
        ref = 200;          // Changes 'value' to 200
        std::cout << value; // Prints: 200


//---------------------------------const int* p - Pointer to Constant Data
int x = 10;
int y = 20;
const int* p = &x;  // p points to x (which is const through p)

// *p = 30;  // ERROR: Cannot modify the value through p
// x = 30;   // OK: x itself is not const, can modify directly

p = &y;     // OK: p itself is not const, can point to y
// *p = 30;  // ERROR: Still cannot modify through p

std::cout << *p;  // OK: Can read the value


//---------------------------------int* const p - Constant Pointer
int x = 10;
int y = 20;
int* const q = &x;  // q is const, must be initialized

*q = 30;    // OK: Can modify the value (x is now 30)
// q = &y;  // ERROR: q itself is const, cannot point elsewhere

x = 40;     // OK: x itself is not const
std::cout << *q;  // Prints: 40

//---------------------------------const int* const p - The Ultimate Const
int x = 10;
int y = 20;
const int* const z = &x;  // Both pointer AND value are const

// *z = 30;  // ERROR: Cannot modify value through z
// z = &y;   // ERROR: Cannot change what z points to

x = 30;     // OK: x itself is not const
std::cout << *z;  // OK: Can read (prints: 30)

return 0;

}
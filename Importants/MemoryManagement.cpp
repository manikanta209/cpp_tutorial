#include<iostream>
#include<cstdlib>
#include <memory>
using namespace std;
//New and Delete Operators in c++
// Demonstrates dynamic memory allocation and deallocation
//Like in java GC is there to clean up unused memory but in c++ programmer is responsible for managing memory using new and delete operators.
// 'new' operator allocates memory on the heap and returns a pointer to the beginning of the allocated memory.
// 'delete' operator deallocates memory that was previously allocated with 'new' to prevent memory leaks.



int main() {
    // Allocate memory for a single integer
    int* pInt = new int; 
    *pInt = 42;
    std::cout << "Value of pInt: " << *pInt << std::endl;

    // Deallocate memory for the single integer
    delete pInt;

    // Allocate memory for an array of integers
    int size = 5;
    int* pArray = new int[size];
    for (int i = 0; i < size; ++i) {
        pArray[i] = i * 10;
    }

    std::cout << "Values in pArray: ";
    for (int i = 0; i < size; ++i) {
        std::cout << pArray[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate memory for the array of integers
    delete[] pArray;

    //------------------------------Smart Pointers in C++ (C++11 and later)
    //Smart pointers automatically manage memory and help prevent memory leaks and dangling pointers.
    //----------------Need to study more about smart pointers--------------------


    //std::unique_ptr demonstration
    std::unique_ptr<int> uniquePtr(new int(55));
    std::cout << "Value of uniquePtr: " << *uniquePtr << std::endl;
    // No need to explicitly delete, memory will be freed when uniquePtr goes out of scope
    

    //std::shared_ptr demonstration
    std::shared_ptr<int> sharedPtr1(new int(75));
    std::shared_ptr<int> sharedPtr2 = sharedPtr1; // shared ownership
    std::cout << "Value of sharedPtr1: " << *sharedPtr1 << std::endl;

    //std::weak_ptr demonstration
    std::weak_ptr<int> weakPtr = sharedPtr1; // weak reference to sharedPtr1
    if (auto sp = weakPtr.lock()) { // Check if the object is still alive
        std::cout << "Value of weakPtr: " << *sp << std::endl;
    } else {
        std::cout << "weakPtr is expired." << std::endl;
    }


    //Constant pointer and pointer to constant
    int value1 = 100;
    int value2 = 200;   
    int* const constPtr = &value1; // Constant pointer to an integer
    //*constPtr = 150; // Error: cannot change the value pointed to by const
    std::cout << "Value pointed by constPtr: " << *constPtr << std::endl;
    const int* ptrToConst = &value2; // Pointer to a constant integer
    // *ptrToConst = 250; // Error: cannot change the value pointed to by ptrToConst
    std::cout << "Value pointed by ptrToConst: " << *ptrToConst << std::endl;

    std::cout << "Memory management demonstration completed." << std::endl;

    return 0;
}
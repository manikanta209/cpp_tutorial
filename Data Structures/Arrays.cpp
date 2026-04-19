#include <iostream>
using namespace std;

//---------------------------------------Arrays in C++
//An array is a collection of variables that are accessed with an index number.
//Arrays store multiple values of the same type in a single variable, instead of declaring separate variables for each value.


    void printArray(int arr[], int size){
        cout << "Array elements are: ";
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

int main(){

    int nums[5] = {10, 20, 30, 40, 50}; // Declare and initialize an array of integers

    // Accessing array elements using index
    for(int i = 0; i < 5; i++){
        cout << "Element at index " << i << ": " << nums[i] << endl;
    }

    // Modifying array elements
    nums[2] = 100; // Change the value at index 2
    cout << "After modification, element at index 2: " << nums[2]<< endl;


    // Array size
    int size = sizeof(nums)/sizeof(nums[0]);
    cout << "Size of the array calculated using sizeof: " << size << endl;

    //Arrays and pointers
    int* ptr = nums; // Array name acts as a pointer to the first element
    cout << "First element using pointer: " << *ptr << endl;


    //Passing array to the function
    printArray(nums, size);

    //Using the range-based for loop (C++11 and later)
    cout << "Array elements using range-based for loop: ";
    for(int num : nums){
        cout << num << " ";
    }

    //Removing element from the array is not possible 
    //Note: Arrays have a fixed size. If you need a dynamic array, consider using std::vector from the C++ Standard Library.
    cout << endl;


    

    return 0;
}
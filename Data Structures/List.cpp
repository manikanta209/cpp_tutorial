#include <iostream>
#include <list>

using namespace std;

/*

Two major differences between lists and vectors are:

1. You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.
2. Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.

*/

int main(){

    // Different ways to initialize lists
    list<int> l1;                     // Empty list
    list<int> l2(5);                  // 5 elements, all 0
    list<int> l3(5, 10);              // 5 elements, all 10
    list<int> l4 = {1, 2, 3, 4, 5};   // Initializer list (C++11)
    list<int> l5{10, 20, 30};         // Uniform initialization (C++11)

    //------------------------------Element access

    list<int> lst = {10, 20, 30, 40, 50};

    //1. Using front() and back()
    cout << "First element of lst: " << lst.front() << endl; // Outputs 10
    cout << "Last element of lst: " << lst.back() << endl;  // Outputs 50

    // Note: Lists do not support at() or operator[] for random access

    //-------------------------------Adding elements
    list<int> l;
    l.push_back(100); // Adds 100 at the end
    l.push_back(200); // Adds 200 at the end
    l.push_front(50); // Adds 50 at the beginning
    cout << "Elements in l after push_back and push_front: ";
    for(int num : l) cout << num << " "; // Outputs 50 100 200

    //-------------------------------Removing elements
    l.pop_back(); // Removes the last element (200)
    l.pop_front(); // Removes the first element (50)
    cout << "\nElements in l after pop_back and pop_front: ";
    for(int num : l) cout << num << " "; // Outputs 100

    // Removing specific elements by value
    lst.remove(30); // Removes all occurrences of 30
    cout << "\nElements in lst after remove(30): ";
    for(int num : lst) cout << num << " "; // Outputs 10 20 40 50

    //lst.clear() ---- remove all the elements

    //Iterators - You cannot loop through the list elements with a traditional for loop combined with the .size() method since lists do not support random access.

    cout << "\nIterating through lst using iterator: ";
    
    list<string> strList = {"apple", "banana", "cherry"};

    for(string str : strList){
        cout << str << " ";
    }


    return 0;
}
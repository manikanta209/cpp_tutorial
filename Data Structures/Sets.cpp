#include <iostream>
#include <set>
using namespace std;

int main(){

    /*
    A set stores unique elements where they:

        1.  Are sorted automatically in ascending order.
        2.  Are unique, meaning equal or duplicate values are ignored.
        3.  Can be added or removed, but the value of an existing element cannot be changed.
        4.  Cannot be accessed by index numbers, because the order is based on sorting and not indexing.
    */

    // Different ways to initialize sets
    set<int> s1;                     // Empty set
    set<int> s2 = {1, 2, 3, 4, 5};   // Initializer list (C++11)
    set<int> s3{10, 20, 30};         // Uniform initialization (C++11)

    //------------------------------Adding elements
    s1.insert(100); // Inserts 100 into the set
    s1.insert(200); // Inserts 200 into the set
    s1.insert(100); // Duplicate, will not be added

    cout << "Elements in s1 after insertions: ";
    for(int num : s1) cout << num << " "; // Outputs 100 200

    //------------------------------Removing elements
    s1.erase(100); // Removes 100 from the set

    cout << "\nElements in s1 after erasing 100: ";
    for(int num : s1) cout << num << " "; // Outputs 200

    //------------------------------Finding elements
    if(s1.find(200) != s1.end()){
        cout << "\n200 found in s1" << endl; // This will be printed
    } else {
        cout << "\n200 not found in s1" << endl;
    }

    return 0;
}
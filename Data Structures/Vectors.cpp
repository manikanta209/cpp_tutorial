#include   <iostream>
#include   <vector>

using namespace std;

int main(){

    // Different ways to initialize vectors
    vector<int> v1;                     // Empty vector
    vector<int> v2(5);                  // 5 elements, all 0
    vector<int> v3(5, 10);              // 5 elements, all 10
    vector<int> v4 = {1, 2, 3, 4, 5};   // Initializer list (C++11)
    vector<int> v5{10, 20, 30};         // Uniform initialization (C++11)

    //------------------------------Element access

    vector<int> vec = {10, 20, 30, 40, 50};

    //1. Using front() and back()
    cout << "First element of v4: " << vec.front() << endl; // Outputs 10
    cout << "Last element of v4: " << vec.back() << endl;  // Outputs 50

    //2. Using at()
    cout << "Element at index 2 of vec: " << vec.at(2) << endl; // Outputs 30

    //3. Using operator[]
    cout << "Element at index 3 of vec: " << vec[3] << endl; // Outputs 40


    //-------------------------------Adding elements
    vector<int> v;
    v.push_back(100); // Adds 100 at the end
    v.push_back(200); // Adds 200 at the end
    v.push_back(300); // Adds 300 at the end
    v.push_back(400); // Adds 400 at the end
    v.push_back(500); // Adds 500 at the end
    v.push_back(600); // Adds 600 at the end
    cout << "Elements in v after push_back: ";
    for(int num : v) cout << num << " "; // Outputs 100 200 300 400 500 600

        //Using insert() to add elements at specific positions
    v.insert(v.begin() + 3, 350); // Inserts 350 at index 3
    cout << "\nElements in v after insert: ";

    //Using at() to display elements

    //-------------------------------Removing elements
    v.pop_back(); // Removes the last element (600)
    cout << "\nElements in v after pop_back: ";
    for(int num : v) cout << num << " "; // Outputs 100 200 300
    //remove element by index
    vec.erase(vec.begin());     // Removes element at index 0 (100)
    vec.erase(vec.begin() + 1); // Removes element at index 1 (200)
    //remove elements in a range
    vec.erase(vec.begin(), vec.begin() + 2); // Removes first two elements (300, 400)
    cout << "\nElements in vec after erase: ";
    for(int num : vec) cout << num << " "; // Outputs 500

    //vec.clear() ---- remove all the elements

    //-------------------------------Iterating through a vector
    vector<int> vec2 = {10,20,30,40,50,60};
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

        //Forward iterator
        for(auto it = vec2.begin(); it != vec2.end(); ++it){
            cout << *it << " "; // Outputs 10 20 30 40 50 60
        }

        //Index-based iteration 
        for(int i = 0; i < cars.size(); i++){
            cout << cars[i] << " "; // Outputs Volvo BMW Ford Mazda
        }

        //Modern range-based for loop
        for(int num : vec2){
            cout << num << " "; // Outputs 10 20 30 40 50 60
        }
    
        //reverse iterator
        for(int i = vec2.size() - 1; i >= 0; i--){
            cout << vec2[i] << " "; // Outputs 60 50 40 30 20 10
        }

        //iterate by 2 values
        for(size_t i = 0; i < vec2.size(); i += 2){
            cout << vec2[i] << " "; // Outputs 10 30 50
        }
     
    //----------------------------------Get the Size of a Vector
        cout << "\nSize of vec2: " << vec2.size() << endl; // Outputs 6    

    //----------------------------------Check if a Vector is Empty
        vector<int> emptyVec;
        if(emptyVec.empty()){
            cout << "The vector is empty." << endl;
        } else {
            cout << "The vector is not empty." << endl;
        }

        

    return 0;
}
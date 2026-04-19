#include<iostream>
#include<stack>
using namespace std;

int main(){

    // Different ways to initialize stacks
    stack<int> s1;                     // Empty stack
    stack<int> s2;                     // Another empty stack

    //------------------------------Adding elements
    s1.push(10); // Pushes 10 onto the stack , at the top
    s1.push(20); // Pushes 20 onto the stack , at the top
    s1.push(30); // Pushes 30 onto the stack , at the top

    cout << "Top element of s1 after pushes: " << s1.top() << endl; // Outputs 30

    //------------------------------Removing elements
    s1.pop(); // Removes the top element (30)
    cout << "Top element of s1 after pop: " << s1.top() << endl; // Outputs 20

    //------------------------------Size of the stack
    cout << "Size of s1: " << s1.size() << endl; // Outputs 2

    //------------------------------Checking if the stack is empty
    if(s1.empty()){
        cout << "s1 is empty" << endl;
    } else {
        cout << "s1 is not empty" << endl; // This will be printed
    }

    return 0;
}
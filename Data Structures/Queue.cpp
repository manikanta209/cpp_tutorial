#include <iostream>
#include <queue>

using namespace std;

int main(){

    // Different ways to initialize queues
    queue<int> q1;                     // Empty queue
    queue<int> q2;                     // Another empty queue

    //------------------------------Adding elements
    q1.push(10); // Pushes 10 onto the queue, at the back
    q1.push(20); // Pushes 20 onto the queue, at the back
    q1.push(30); // Pushes 30 onto the queue, at the back

    cout << "Front element of q1 after pushes: " << q1.front() << endl; // Outputs 10
    cout << "Back element of q1 after pushes: " << q1.back() << endl;   // Outputs 30

    //------------------------------Removing elements
    q1.pop(); // Removes the front element (10), 20 becomes the new front
    cout << "Front element of q1 after pop: " << q1.front() << endl; // Outputs 20

    //------------------------------Size of the queue
    cout << "Size of q1: " << q1.size() << endl; // Outputs 2

    //------------------------------Checking if the queue is empty
    if(q1.empty()){
        cout << "q1 is empty" << endl;
    } else {
        cout << "q1 is not empty" << endl; // This will be printed
    }

    return 0;
}
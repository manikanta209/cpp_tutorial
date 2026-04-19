#include <iostream>

using namespace std;


//---------------------------------------Encapsulation in C++
//The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users
//To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).
//If you want others to read or modify the value of a private member, you can provide public get and set methods.


class Person {
private: //private access specifier
    string name; //private data member
    int age;     //private data member
public:
    //public method to set name
    void setName(string n) {
        name = n;
    }

    //public method to get name
    string getName() {
        return name;
    }

    //public method to set age
    void setAge(int a) {
        if (a >= 0) { //simple validation
            age = a;
        } else {
            cout << "Age cannot be negative." << endl;
        }
    }

    //public method to get age
    int getAge() {
        return age;
    }
};

int main() {
    Person person;

    // Setting values using public methods
    person.setName("Alice");
    person.setAge(30);

    // Getting values using public methods
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    // Attempting to set a negative age
    person.setAge(-5); // This will trigger the validation message

    return 0;
}
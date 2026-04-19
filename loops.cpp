#include <iostream>
using namespace std;

int main() {
    //==============================If-Else Statement==============================
    if (20>10)
    {
        cout << "20 is greater than 10" << endl;
    }else{
        cout << "10 is greater than 20" << endl;
    }
    
    //Short hand if-else (Ternary Operator)
    int a = 30;
    int b = 20;
    int max = (a > b) ? a : b;
    cout << "The maximum value is: " << max << endl;


    //==============================For loop==============================
    cout << "For Loop:" << endl;
    for(int i = 1; i <= 5; i++) {
        cout << "Iteration " << i << endl;
    }

    //==============================While loop==============================
    cout << "\nWhile Loop:" << endl;
    int j = 1;
    while(j <= 5) {
        cout << "Iteration " << j << endl;
        j++;
    }

    //==============================Do-While loop==============================
    cout << "\nDo-While Loop:" << endl;
    int k = 1;
    do {
        cout << "Iteration " << k << endl;
        k++;
    } while(k <= 5);

    //==============================Break Statement==============================
    cout << "\nBreak Statement in For Loop:" << endl;
    for(int i = 1; i <= 10; i++) {
        if(i == 6) {
            cout << "Breaking the loop at iteration " << i << endl;
            break;
        }
        cout << "Iteration " << i << endl;
    }

    //==============================Continue Statement==============================
    cout << "\nContinue Statement in For Loop:" << endl;
    for(int i = 1; i <= 10; i++) {
        if(i == 6) {
            cout << "Skipping iteration " << i << endl;
            continue;
        }
        cout << "Iteration " << i << endl;
    }

    //==============================Switch Case==============================

    cout << "\nSwitch Case Example:" << endl;
    int day = 4;
    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
        }

        //==============================Enums==============================
        //Creating a enum - enum is a user-defined type consisting of a set of named integral constants
        cout << "\nEnum Example:" << endl; 
        enum Color { RED, GREEN, BLUE };
        Color myColor = GREEN;
        cout << "Selected color value: " << myColor << endl;

        //accessing enum values
        Color favoriteColor = BLUE;
        if(favoriteColor == BLUE) {
            cout << "Your favorite color is Blue!" << endl;
        }

        enum Level { LOW = 1, MEDIUM = 5, HIGH = 10 };
        Level gameLevel = MEDIUM;
        cout << "Game level value: " << gameLevel << endl;


        //==============================References==============================
        //C++ references - A reference is an alias for another variable. 
        // Once a reference is initialized to a variable, it cannot be changed to refer to another variable.
        // References are often used to avoid copying large data structures or to allow functions to modify the original variable.
        // Syntax: datatype &referenceName = originalVariable;
        cout << "\nC++ References Example:" << endl;
        int original = 50;
        int &ref = original; // ref is a reference to original
        cout << "Original value: " << original << endl;
        cout << "Reference value: " << ref << endl;
        ref = 100; // Modifying ref also modifies original
        cout << "Modified Original value: " << original << endl;
        cout << "Modified Reference value: " << ref << endl;


        //==============================Pointers==============================
        //Creating a pointer - A pointer is a variable that stores the memory address of another variable.
        cout << "\nPointer Example:" << endl;
        int var = 42;
        int *ptr = &var; // ptr is a pointer to var
        cout << "Value of var: " << var << endl;
        cout << "Address of var: " << &var << endl;
        cout << "Value of ptr (address of var): " << ptr << endl;
        cout << "Value pointed to by ptr: " << *ptr << endl; // Dereferencing ptr to get the value of var

        //Modifying value using pointer
        *ptr = 84; // Changing the value of var using ptr
        cout << "Modified value of var: " << var << endl;
        cout << "Value pointed to by ptr after modification: " << *ptr << endl;

        // why we use pointers - Pointers are used for dynamic memory allocation, arrays, and functions.
        // They allow for efficient array handling and enable functions to modify variables outside their scope.
        // They are also essential for implementing data structures like linked lists and trees.


        //Structures - A structure is a user-defined data type that groups related variables of different types.
        //Unlike an array, a structure can contain many different data types: int, string, bool, etc.

        //==============================Named structure==============================
        cout << "\nStructure Example:" << endl;
        struct Person {
            string name;
            int age;
            float height;
        };

        Person person1; // Creating an instance of Person
        person1.name = "Alice";
        person1.age = 30;
        person1.height = 5.5;
        
        cout << "Name: " << person1.name << endl;
        cout << "Age: " << person1.age << endl;
        cout << "Height: " << person1.height << " feet" << endl;

        //One structure in multiple variables
        Person person2, person3;
        person2.name = "Bob";
        person2.age = 25;
        person2.height = 6.0;
        person3.name = "Charlie";
        person3.age = 28;
        person3.height = 5.8;
        cout << "\nPerson 2 Name: " << person2.name << ", Age: " << person2.age << ", Height: " << person2.height << " feet" << endl;
        cout << "Person 3 Name: " << person3.name << ", Age: " << person3.age << ", Height: " << person3.height << " feet" << endl;

        //Anonymous structure
        // An anonymous structure is defined without a name and is typically used for single instances.
        struct {
            string title;
            string author;
            int pages;
        } book1, book2;
        book1.title = "C++ Programming";
        book1.author = "John Doe";
        book1.pages = 350;
        book2.title = "Data Structures";
        book2.author = "Jane Smith";
        book2.pages = 400;
        cout << "\nBook Title: " << book1.title << endl;
        cout << "Author: " << book1.author << endl;
        cout << "Pages: " << book1.pages << endl;


    return 0;
}

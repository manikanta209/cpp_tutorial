#include <iostream>

using namespace std;

//Don't create a function after main function
void greetUser(string name) {
    cout << "Hello, " << name << "!" << endl;
}

//Defalut parameter
void myCountry(string name, string country = "India") {
    cout << country << ", " << name << "!" << endl;
}

//Pass by value
void passByValue(int x) {
    x = x + 10;
    cout << "Inside passByValue, x = " << x << endl;
}

//Pass by reference
void passByReference(int &x) {
    x = x + 10;
    cout << "Inside passByReference, x = " << x << endl;
}

//Pass by Array
void passByArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = arr[i] + 5;
    }
}

//Pass by structure
struct Car {
    string brand;
    string model;
    int year;
};

void passByStructure(Car c) {
    cout << "Car Brand: " << c.brand << ", Model: " << c.model << ", Year: " << c.year << endl;
}

//Function overloading - same function name with different parameters
void display(int i) {
    cout << "Integer: " << i << endl;
}
void display(double d) {
    cout << "Double: " << d << endl;
}
void display(string s, int n) {
    cout << "String: " << s << endl;
    cout << "Integer: " << n << endl;
}


//Function overriding - same function name with different data types
int add(int x, int y) {
    return x + y;
}
double add(double x, double y) {
    return x + y;
}


int main(){

    greetUser("Alice");

    //Using default parameter
    myCountry("Charlie", "US");    
    myCountry("Bob");

    //Demonstrating pass by value
    int a = 5;
    cout << "Before passByValue, a = " << a << endl;
    passByValue(a);
    cout << "After passByValue, a = " << a << endl;
    

    //Demonstrating pass by reference
    cout << "Before passByReference, a = " << a << endl;
    passByReference(a);
    cout << "After passByReference, a = " << a << endl;

    //Demonstrating pass by array
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Before passByArray, arr = ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    passByArray(arr, size);
    cout << "After passByArray, arr = ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    //Demonstrating pass by structure
    Car myCar = {"Toyota", "Corolla", 2020};
    passByStructure(myCar);


    //Function overloading
    display(10);
    display(10.5);
    display("Hello", 20);

    //Function overriding
    cout << "Sum of integers: " << add(5, 10) << endl;
    cout << "Sum of doubles: " << add(5.5, 10.5) << endl;


return 0;
}


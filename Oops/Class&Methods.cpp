#include <iostream>

using namespace std;


//---------------------------------------classes in the c++ language
class Car {
public:
    //data members
    string brand;
    string model;
    int year;

    //member function
    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }

    void startEngine() ; //method declaration

    void stopEngine(int duration) ; //method declaration
};


//Method outside the class definition
void Car::startEngine() {
    cout << "Engine started!" << endl;
}

void Car::stopEngine(int duration) {
    cout << "Engine stopped after " << duration << " seconds." << endl;
}

//--------------------------------------------Example for the constructors
class Bike {    
public:
    string brand;
    string model;
    int year;

    //constructor
    Bike(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    //constructor overloading can also be done
    Bike() {
        brand = "DefaultBrand";
        model = "DefaultModel";
        year = 2000;
    }

    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
    // Alternative way to declare constructor outside the class
    // Bike(string b, string m, int y);
};

//Constructors defined outside the class
// Bike::Bike(string b, string m, int y) {
//     brand = b;
//     model = m;
//     year = y;
// }



int main() {

    //----------------------------------Using the Car class

    //creating an object of the Car class
    Car car1;

    //assigning values to data members
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;

    //calling member function to display car information
    car1.displayInfo();

    Car car2;
    car2.brand = "Honda";
    car2.model = "Civic";
    car2.year = 2019;
    
    car2.displayInfo();

    //calling the startEngine method
    car1.startEngine();
    //calling the stopEngine method with duration argument
    car1.stopEngine(5);

    //----------------------------------Using the Bike class with constructor
    Bike bike1("Yamaha", "YZF-R3", 2021);
    bike1.displayInfo();

    return 0;
}
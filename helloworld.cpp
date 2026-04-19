#include <iostream>
#include <cmath>

using namespace std;


namespace first {
    int x=1;
}

namespace second{
    int x=2;
}

int main() {
    // Write C++ code here
 
    //integer
    int x =5;
    int y=10;

    int sum = x+y;


    //double
    double x1=2.45;

    //single character
    char grade = 'A';

    //boolean(true / false)
    bool isDesktoMode = false;

    //Strings
    string name = "Deadshot";

    std::cout << "Try programiz.pro" << '\n';
    std::cout << "Hello deadshot" << '\n';\
    std::cout << "My Name Is" << name << '\n';


    //Const value
    const int mode = 1;


    //Using the namespace
    std :: cout << "First namespace : " << first::x << '\n';
    std :: cout << "Second namespace : " << second::x << '\n';


    //Arithmatic operators
    int students = 0;
    students = students + 1;
    students+=1;
    students++;

    students = students - 1;
    students-=2;
    students--;

    students = students * 2;

    students = students / 2;
    students /=2;



    //Type conversion

    //Implicit Type Conversion (Automatic)
    int intialInt = 10;
    double afterConToDouble = intialInt;

    double a= 5.5;
    int aa= a;

    std::cout << aa << '\n';
    std :: cout << afterConToDouble << '\n';


    //Explicit Type Conversion (Manual)
    int i = (int)3.134;

    std ::cout << i << '\n';



    //Usefull match functions
    double x3=3.99;
    double y3= 4;
    double z=0;

    //z= std::max(x3,y3);
    //z = std::min(x3,y3);
    //z= pow(2,3);
    //z = sqrt(81);
    //z = abs(-5);   --- o/p : 5
    //z= ceil(x3);   --- o/p : 4
    z = floor(x3);    // o/p : 3
    std ::cout << z;

    return 0;
}
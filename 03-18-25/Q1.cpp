#include <iostream>
using std::cout;
using std::endl;

class Box {
public:
    double length, width, height;

    // Default constructor definition
    Box() {
        cout << "Default constructor called" << endl;
        length = width = height = 1.0;
    }

    // Constructor with parameters
    Box(double lengthValue, double widthValue, double heightValue) {
        cout << "Box constructor called" << endl;
        length = lengthValue;
        width = widthValue;
        height = heightValue;
    }
};

int main() {
    // Testing the constructors
    Box box1; // Calls the default constructor
    Box box2(2.0, 3.0, 4.0); // Calls the parameterized constructor

    return 0;
} 

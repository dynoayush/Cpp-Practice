#include <iostream>

// Forward declaration of class B
class ClassB;

class ClassA {
private:
    int valueA;

public: 
    // Constructor for ClassA
    ClassA(int a): valueA(a) {}

    // Declare combinedFunction as a friend
    friend void combinedFunction(ClassA& a, ClassB& b);
};

class ClassB {
private:
    int valueB;

public:
    // Constructor for ClassB
    ClassB(int b): valueB(b) {}

    // Declare combinedFunction as a friend
    friend void combinedFunction(ClassA& a, ClassB& b);
};

// The combinedFunction can access private members of both ClassA and ClassB
void combinedFunction(ClassA& a, ClassB& b) {
    std::cout << "ClassA value: " << a.valueA << std::endl;
    std::cout << "ClassB value: " << b.valueB << std::endl;
    std::cout << "Sum of values: " << a.valueA + b.valueB << std::endl;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);

    // Call combinedFunction to display the values and their sum
    combinedFunction(objA, objB);
    return 0;
}

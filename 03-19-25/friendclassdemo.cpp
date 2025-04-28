#include <iostream>
 
class ClassA {
private: 
    int privateData;

public:
    ClassA(int data) : privateData(data) {}

    friend class ClassB; // Declare ClassB as a friend 
};

class ClassB {
public: 
    void displayPrivateData(ClassA& obj) {
        // ClassB can access ClassA's private members
        std::cout << "Private data of ClassA: " << obj.privateData << std::endl;
    }

    void modifyPrivateData(ClassA& obj, int newData) {
        obj.privateData = newData;
        std::cout << "Private data of ClassA modified to: " << obj.privateData << std::endl;
    }
};

int main() {
    ClassA obj(10);  // Create an instance of ClassA
    ClassB objB;     // Create an instance of ClassB

    objB.displayPrivateData(obj);  // Display the private data of obj
    objB.modifyPrivateData(obj, 20);  // Modify the private data of obj
    objB.displayPrivateData(obj);  // Display the modified private data of obj

    return 0;
}

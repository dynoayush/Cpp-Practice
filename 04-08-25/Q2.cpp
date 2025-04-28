// Local Class
#include <iostream>

void exampleFunction() {
    // Define a local class inside a function
    class LocalClass {
    public:
        void greet() {
            std::cout << "Hello FROM LOCALCLASS!" << std::endl;
        }
    };

    // Create object and use it
    LocalClass obj;
    obj.greet();
}

int main() {
    exampleFunction();
    return 0;
}

/*
✅ Notes on Local Classes in C++:
- They can access static variables or constants from the enclosing function (but not non-static locals directly).
- They cannot have static data members.
- They cannot use templates (in standard C++).
- Can have member functions, constructors, destructors, etc.
*/

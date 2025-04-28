#include <iostream>

class Box {
private: 
    double width;

public:
    Box(double w): width(w) {}

    // Declare friend function
    friend double printWidth(Box box);

};

// Define friend function outside the class
double printWidth(Box box){
    // friend function can access private members of the class
    return box.width;
}

int main(){
    Box box(10.0);
    std::cout << printWidth(box) << std::endl;
    return 0;
}

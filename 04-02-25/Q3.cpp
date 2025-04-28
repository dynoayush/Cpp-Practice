#include <iostream>
//using namespace std;
// Using Source
//Forward declaration of Meters class (capital M)
class Meters;

class Distance{
    int feet;
    public:
    Distance(int f): feet(f) {}

    //Conversion function declaration - must match class name exactly
    operator Meters();  // Changed from Meters() to match class name
};

class Meters{
    double meters;
    public:
    Meters(double m): meters(m) {}

    void show(){
        std::cout << "Distance in meters: " << meters << std::endl;
    }
};

//Define the conversion function after full definition of Meters
Distance::operator Meters(){
    return Meters(feet * 0.3048); // Convert feet to meter
}

int main(){
    Distance d(10);   // 10 feet
    Meters m = d;    // Class-to-Class conversion
    m.show();        // Output: Distance in meters: 3.048
    return 0;
}

/*
Class Source{
    public:
    operator Destinationclass();
}
*/
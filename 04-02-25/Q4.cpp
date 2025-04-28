#include <iostream>

class Distance{
    int feet;
    public:
    Distance(int f): feet(f) {}

    int getFeet() const { return feet; } // Getter function for feet
};

class Meters{
    double meters;
    public:
    // Constructor that converts Distance object to Meters
    Meters(const Distance& d){
    meters = d.getFeet() * 0.304; // Convert feet to meters
    }

    void show(){
        std::cout << "Distance in meters: " << meters << std::endl;
    }
};

int main(){
    Distance dist(10); // 10 feet
    Meters m(dist);    // Class-to-Class conversion using constructor
    m.show();          // Output: Meters: 3.048
    return 0;
}
/*
class Destination{
    public:
    Destination(const Source &obj){
        conversion logic
    }
};
*/
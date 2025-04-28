#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;  // Data field for width
    double height; // Data field for height

public:
    
    Rectangle() {
        width = 1.0;   // Default width
        height = 1.0;  // Default height
    }

    double getArea() const {
        return width * height;
    }

    double getPerimeter() const {
        return 2 * (width + height);
    }
    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        height = h;
    }

    double getWidth() const {
        return width;
    }

    double getHeight() const {
        return height;
    }
};

int main() {

    Rectangle rect;

    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() << endl;

    rect.setWidth(5.0);
    rect.setHeight(4.0);

    // Output the new area and perimeter
    cout << "New Area: " << rect.getArea() << endl;
    cout << "New Perimeter: " << rect.getPerimeter() << endl;

    return 0;
}


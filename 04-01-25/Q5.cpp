#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    // Constructor
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Overloading the + operator
    Point operator+(const Point &other) const {
        return Point(x + other.x, y + other.y);
    }
};

int main() {
    Point p1(1, 2);
    Point p2(1, 2);
    Point p3(3, 4);

    Point sum1 = p1 + p2;
    Point sum2 = p1 + p3;

    cout << "(" << sum1.x << ", " << sum1.y << ")" << endl; // Outputs: (2, 4)
    cout << "(" << sum2.x << ", " << sum2.y << ")" << endl; // Outputs: (4, 6)

    return 0;
}

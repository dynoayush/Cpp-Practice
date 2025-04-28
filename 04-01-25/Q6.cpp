#include <iostream>
using namespace std;
// unary minus overload
class Number{
    int value;
public:
    Number(int v) : value(v) {}
    /* classname operatorOp()
    {
        return *this;
    }
        or
    friend classname operatorOp(classname obj);
    */
    //Overloading unary minus(-)
    Number operator-(){
        return Number(-value);
    }
    void display(){
        cout<< "Value: "<<value<<endl;
    }
};
int main() {
    Number num1(10);
    Number num2 = -num1; // Calls overloaded unary minus operator 

    cout << "Original number: ";
    num1.display(); 

    cout << "After applying unary minus: ";
    num2.display(); 

    return 0;
}
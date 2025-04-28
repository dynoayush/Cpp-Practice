#include <iostream>
using namespace std;
//Class to Basic
class Number{
    int value;
    public:
    Number(int v) { value = v; }

    //Overload conversion operator
    /*
    operator returnType(){
        conversion logic
        return returnTypeValue;
    }
    */
    operator int() { 
        return value; 
        }
};

int main(){
    Number num(25);
    int x = num; // Implicit conversion from number to int 
    cout <<"Converted Value: "<< x << endl;
    return 0;
}
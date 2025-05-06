// Run time polymorphism (agr virtual declare nhi krte ho tho base class ka method hi call hoga)
#include <iostream>
using namespace std;

class Base{
    public:
    void print(){
        cout<<"Base class print";
    }
};

class Derived : public Base
{
    public:
    void print(){
        cout<<"Derived Class print";
    }
};

int main(){
    Base *b;
    Derived d;
    b = &d;
    b->print();
    return 0;
}
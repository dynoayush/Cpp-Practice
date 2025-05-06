//Added Virtual (Run time polymorphism)
#include<iostream>
using namespace std;
class Base{
    public:
    virtual void print()
    {
        cout<<"Base Class Print";
    }
};
class Derived:public Base
{
    public:
    void print()
    {
        cout<<"Derived Class Print";
    }
};
int main()
{
    Base *b;
    Derived d;
    b = &d;
    b->print();
    return 0;
}
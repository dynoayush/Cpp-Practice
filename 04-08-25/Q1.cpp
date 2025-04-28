// Pointer to function
#include <iostream>
class Myclass{
    public:
        int a;
        double b;

        void show(){
            std::cout << "Inside show(): a = " << a << ",b = " << b << std::endl;
        }

        void setValues(int x,double y){
            a=x;
            b=y;
        }
};

int main(){
    Myclass obj;

    //Pointer to data members
    int Myclass::*ptrToA = &Myclass::a;
    double Myclass::*ptrToB = &Myclass::b;

    //Pointer to member function
    void (Myclass::*ptrToShow)() = &Myclass::show;
    void (Myclass::*ptrToSetValues)(int,double) = &Myclass::setValues;

    //Access data members using pointers
    obj.*ptrToA = 10;
    obj.*ptrToB = 3.14;

    //call member function using pointer
    (obj.*ptrToShow)(); // Equivalent to obj.show()

    //call set values using pointer
    (obj.*ptrToSetValues)(20,5.67); //Equivalent to obj.setvalues(20,5.67);

    //Show again to verify values
    (obj.*ptrToShow)();

    return 0;
}









/*
Declaration
<type> <ClassName>::*pointerName;

Assignment 
pointerName = &ClassName::memberName;

Access using object
object.*pointerName = value;     If you have an object
pointerToObject->*pointerName = value;

Declaration
<return_type> (ClassName::*pointerName)(<parameter_types>);

Assignment
pointerName = &ClassName::memberFunction;

Invocation using object
(object.*pointerName)(args);    With Object
(pointerToObject->*pointerName)(args);   With pointer to object
*/
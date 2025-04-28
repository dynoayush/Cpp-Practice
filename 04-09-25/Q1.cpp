//Pointer to function
#include<iostream>
class Myclass{
    public:
        int a;
        double b;

        void show(){
            std::cout<< "Inside show(): a = " << a << " ,b = " << b << std::endl;
        }

        void setValues(int x,double y){
            a=x;
            b=y;
        }
};
int main(){
    Myclass obj1;

    //Pointer to data members
    int Myclass::*ptrToA = &Myclass::a;
    double Myclass::*ptrToB = &Myclass::b;

    //Pointer to member functions
    void (Myclass::*ptrToShow)() = &Myclass::show;
    void (Myclass::*ptrToSetValues)(int,double) = Myclass::setValues;

    //Access data members using pointers
    obj1.*ptrToA = 10;
    obj1.*ptrToB = 3.14;

    //Call member function using pointer
    (obj1.*ptrToShow)(); // Equivalent to obj.show()

    //Call setValues using pointer
    (obj1.*ptrToSetValues)(20,5.67); // Equivalent to obj.setValues(20,5.67)

    //Show again to verify values
    (obj1.*ptrToShow)();
    
    return 0;
}

/*
Declaration 
Pointer to data member
<type> <ClassName>::*pointerName;

Assignment
pointerName = &ClassName::memberName;

Access using object
object.*pointerName = value;    If you have an object
pointerToObject->*pointerName = value;   If you have a pointer to object

Declaration
pointer to member function
<return-type> (<ClassName>::*pointerName)(<parameter-list>);

Assignment
pointerName = &ClassName::memberFunction;

Invocation using object
(object.*pointerName)(<arguments>);     with object
(pointerToObject->*pointerName)(args);  with pointer to object
*/
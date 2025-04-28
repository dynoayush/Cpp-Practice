// Destructor
#include <iostream>
using namespace std;

class Demo{
    public:
        //Constructor
        Demo(){
            cout<<"Inside constructor"<<endl;
            }
        //Destructor
        ~Demo(){
            cout<<"Inside destructor"<<endl;
            }           
};

int main(){
    cout<< "Creating an object inside main..." <<endl;
    Demo obj1; // Constructor is called automatically

    cout<< "Exiting the main function..." <<endl;
    return 0; // Destructor will be called automatically when obj goes out of scope
}
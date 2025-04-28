// Copy Constructor (Shallow Copy)
#include <iostream>
using namespace std;
class Demo{
    public:
            int x;

            //Constructor 
            Demo(int val){
                x = val;
                cout<< "Constructor called!" << endl;
            }

            //User defined Copy Constructor
            Demo (const Demo &obj){
            x = obj.x;
            cout << "Copy Constructor called!" << endl; 
            }

            void display(){
                    cout << "Value: " << x << endl;
                }
};


int main(){
    Demo obj1(10); // Constructor is called 
    Demo obj2(obj1); // Copy Constructor is called

    obj2.display();
    return 0;

}
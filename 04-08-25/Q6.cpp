//shallowcopy
#include <iostream>
using namespace std;
class Demo{
    public:
    int x;
    //constuctor
    Demo(int val){
        x=val;
        cout << "constructor called!"<<endl;

    }
    //user-defined copy copy constructor
    Demo(const Demo &obj){
        x=obj.x;
        cout <<"copy constructor called!"<<endl;
    }
    void display(){
        cout << "value:" <<x<<endl;
    }
    
    };
    int main(){
        Demo obj1(10);
        Demo obj2=obj1;
        Demo obj3(obj2);
            obj2.display();
            obj3.display();
            return 0;

    }


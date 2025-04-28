#include <iostream>
using namespace std;
//Basic to Class
class Number{
    int value;
public: 
     // Constructor for basic type to class type conversion 
     /*
     class ClassName{
        public: 
        ClassName(BasicType var){
        }
     };
     */
    Number(int v){
        value = v;
    }

    void display(){
        cout<< "Value: " <<value<<endl;
    }
};
int main(){
    Number num = 10;
    num.display();
    return 0;
}
//Sample
#include <iostream>
using namespace std;
class sample{
private:
int * data;
public:
sample(int value) {
    data = new int(value); //dynamically memo allocte
    cout << "constuctor :Memory allocate,value = " <<data <<endl;
}
//destructor
~sample() {
    cout <<"destructor: Memory freed ,value="<<*data<<endl;
    delete data;//free allocate memory
}
};
int main(){
    sample *obj = new sample (10);//dynamically alocate the obj
    delete obj;
    return 0;
}

#include <iostream>
using namespace std;
void staticExample(){
    static int count = 0;
    count++;
    cout<<"Static variable count = "<<count<<endl;
}
int main(){
    staticExample();
    staticExample();
    staticExample();
    return 0;
}
// Register keyword will not work 
#include <iostream>
using namespace std;

void registerExample(){
    register int count = 5;
    cout <<"Register variable count = "<<count<<endl;
}
int main(){
    registerExample();
    return 0;
}
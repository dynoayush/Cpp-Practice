// Array
#include <iostream>
using namespace std;
int main(){
    int a[] = {1,2,3};
    cout<<sizeof(a)/sizeof(a[0])<<endl;
    cout<<a[1]<<endl;
    return 0;
}
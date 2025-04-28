// Reference Variable problem
#include<iostream>
using namespace std;
int main() {
    int a = 10;
    int &r = a;
    cout<<r<<" "<<a<<endl;
    r++;
    cout<<r<<" "<<a;
    return 0;
}
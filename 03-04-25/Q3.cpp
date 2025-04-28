// Ambigious Overload 
#include <iostream>
using namespace std;
int max(int num1,double num2){
    cout<<"2 Int parameter max function"<<endl;
    if(num1>num2)
        return num1;
    else 
        return num2;
}
double max(double num1,int num2){
    cout<<"2 Int parameter max function"<<endl;
    if(num1>num2)
        return num1;
    else 
        return num2;
}
int main() {
    int a = 10;
    double b = 20.5;
    
    cout << "Max of (10, 20.5): " << max(a, b) << endl;
    cout << "Max of (20.5, 10): " << max(b, a) << endl;

    return 0;
}
//Function Overloading
#include <iostream>
using namespace std;
int max(int num1,int num2){
    cout<<"2 Int parameter max function"<<endl;
    if(num1>num2)
        return num1;
    else 
        return num2;
}
double max(double num1,double num2){
    cout<<"2 Double parameter max function"<<endl;
    if(num1>num2)
        return num1;
    else
        return num2;       
}
double max(double num1, double num2, double num3){
    cout<<"3 Double parameter max function"<<endl;
    return max(max(num1, num2), num3);  
}

int main() {
    cout << "The maximum of 3 and 4 is: " << max(3, 4) << endl;
    cout << "The maximum of 4.0 and 5.9 is: " << max(4.0, 5.9) << endl;
    cout << "The maximum of 3.0, 5.4, and 7.4 is: " << max(3.0, 5.4, 7.4) << endl;
    return 0;
}

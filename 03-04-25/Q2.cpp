#include <iostream>
#include <iomanip>
using namespace std;
int main(){
double number = 12.34567;
cout<<setprecision(3)<<number<<endl
    <<setprecision(4)<<number<<endl    // round off krke le rha hai value 
    <<setprecision(5)<<number<<endl
    <<setprecision(6)<<number<<endl;
    return 0;
}
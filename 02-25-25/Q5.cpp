#include<iostream>
using namespace std;
double compute(double amount,int year,double ri=6.5){
    return amount*year*ri/100;
}
int main(){
    double p,r,t;
    cout<<"Enter p,r,t: ";
    cin>>p>>r>>t;
    cout<<"Simple interest is: "<<compute(p,r,t)<<endl;
    cout<<"Simple interest is: "<<compute(p,r)<<endl;
    return 0;
}




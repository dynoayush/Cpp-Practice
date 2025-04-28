#include<iostream>
using namespace std;
int max(int,int); //function declaration/prototype - list of parameters with their types.
int main(){
    int a =5,b=10;
    int k=max(a,b);//invocation/call
    cout<<"Max value is: "<<k<<endl;
    return 0;
}
// function definition
int max(int m,int n){ // function header 
    if(m>n)
        return m;
    else
        return n;
}


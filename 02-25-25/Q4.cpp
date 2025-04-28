// Inline function
#include<iostream>
using namespace std;
inline int cube(int m){ // function header 
    return m*m*m; 
}
int main(){
    int n=5;
    int k= cube(n); // function call
    cout<<"Cube of "<<n<<" is: "<<k<<endl;
    return 0;
}




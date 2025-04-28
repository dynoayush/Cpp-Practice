// Swapping using reference variable (call by reference)
// #include<iostream>
// using namespace std;
// void swap(int &m,int &n){ //function header
//     int s=m;
//     m=n;
//     n=s;
// }
// int main(){
//     int a=5,b=10;
//     cout<<"Before swapping: a="<<a<<" b="<<b<<endl;
//     swap(a,b);
//     cout<<"After swapping: a="<<a<<" b="<<b<<endl;
//     return 0;
// }
// Swapping using pointer (call by address)
#include<iostream>
using namespace std;
void swap(int *m,int *n){ //function header
    int s=*m;
    *m=*n;
    *n=s;
}
int main(){
    int a=5,b=10;
    cout<<"Before swapping: a="<<a<<" b="<<b<<endl;
    swap(&a,&b);
    cout<<"After swapping: a="<<a<<" b="<<b<<endl;
    return 0;
}
// Write a program to display number of even digits present in a given number.
#include <iostream>
using namespace std;
int main(){
    int num,even =0,rem;
    cout<<"Enter a number:";
    cin>>num;
    while(num!=0){
        rem = num%10;
        if(rem%2==0){
            even++;
        }
        num = num/10;
    }
    cout<<"The number of even digits present in the number is: "<<even;
}
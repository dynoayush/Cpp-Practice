#include <iostream>
//#define SQUARE(x)((x)*(x)) //Macro to calculate the square of a number
//#define MAX(a,b)((a)>(b)?(a):(b)) // Macro to find the maximum of two numbers
#define product(m,n)m*n // Macro to calculate the product of two numbers 
int main(){
    int x,y,result;
    std::cout<<"Enter the values of x nd y: ";
    std::cin>>x>>y;
    //Using the macro
    result  = product(x,y+1); //problematic expansion
    // Display the result
    std::cout<<"Result of product (x,y+l)is: "<<result<<std::endl;
    return 0;
}
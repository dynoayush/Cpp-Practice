#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;
    
    // Ask the user for input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
    
    // Calculate the sum
    sum = num1 + num2;

    // Output the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
    
    return 0;
}

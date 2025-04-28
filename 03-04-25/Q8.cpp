// Character function
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    cout << "Enter the character: ";
    char ch;
    cin >> ch;
    cout << "You entered: " << ch << endl;
    if (islower(ch)) {
        cout << "It is a lowercase letter." << endl;
    } 
    else if (isupper(ch)) {
        cout << "It is an uppercase letter." << endl;
    } 
    else if (isdigit(ch)) {
        cout << "It is a digit." << endl;
    } 
    else {
        cout << "It is a special character." << endl;
    }
    return 0;
}

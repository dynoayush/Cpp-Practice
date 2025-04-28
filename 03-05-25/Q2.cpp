//Pass array to function
#include <iostream>
using namespace std;
void print(int a[],int size){
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << *(a+i) << " ";
    }
    cout << endl;
}
int main(){
    int size;
    int arr[] = {10,20,30,40};
    size = sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    return 0;
}
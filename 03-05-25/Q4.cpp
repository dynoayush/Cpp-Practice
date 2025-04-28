#include <iostream>
using namespace std;
int** allocate2DArray(int** arr, int rows, int cols) {
    arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    return arr;
}
void input2DArray(int** arr, int rows, int cols) {
    cout << "Enter " << rows * cols << " elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
}
void print2DArray(int** arr, int rows, int cols) {
    cout << "2D Array elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void deallocate2DArray(int** arr, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    cout << "Memory has been released." << endl;
}
int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int** arr = nullptr;
    arr = allocate2DArray(arr, rows, cols);

    input2DArray(arr, rows, cols);
    print2DArray(arr, rows, cols);

    deallocate2DArray(arr, rows);

    return 0;
}

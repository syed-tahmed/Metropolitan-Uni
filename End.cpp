// Program to insert an element at the end of an array



#include<iostream>
using namespace std;

int main() {
    // Declare variables
    int array[10];     // Array to store numbers (max size 10)
    int n;             // To store size of array
    int x;             // To store new element
    int i;             // Loop counter

    // Get array size from user
    cout << "Enter The size of array: ";
    cin >> n;

    // Input array elements
    cout << "Enter The array Elements: ";
    for (i = 0; i < n; i++) {
        cin >> array[i];
    }

    // Get new element to insert
    cout << "Enter Element to insert at the end: ";
    cin >> x;

    // Insert element at end
    array[i] = x;
    n++;    // Increase size by 1

    // Print final array
    cout << "Final array after insertion:" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << endl;
    }

}
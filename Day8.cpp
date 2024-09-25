#include<iostream>
using namespace std;

// Function to search for a key in an array
bool search(const int arr[], const int size, int key) {
    // Loop through the array
    for(int i = 0; i < size; i++) {
        // Check if the key is present
        if(arr[i] == key) {
            return true;
        }
    }
    // If key is not found, return false
    return false;
}

int main() {
    // Declare and initialize the array
    const int arr[] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    const int size = sizeof(arr) / sizeof(arr[0]);  // Calculate size of the array

    // Ask user to input the key to search for
    cout << "Enter the element to search for: ";
    int key;
    cin >> key;

    // Call search function and store the result
    bool found = search(arr, size, key);

    // Output whether the key is present or absent
    if(found) {
        cout << "Key is present." << endl;
    } else {
        cout << "Key is absent." << endl;
    }

    return 0;
}

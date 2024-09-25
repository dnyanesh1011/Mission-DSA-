#include<iostream>
using namespace std;

// Function to perform binary search in a sorted array
// Returns the index of 'key' if found, otherwise returns -1
int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    
    // Calculate mid-point of the current search window
    int mid = start + (end - start) / 2;

    // Loop continues until the search window is valid
    while (start <= end) {
        
        // If key is found at mid, return the index
        if (arr[mid] == key) {
            return mid;
        }

        // If key is greater than the middle element, search the right half
        if (key > arr[mid]) {
            start = mid + 1;
        } 
        // If key is smaller, search the left half
        else {
            end = mid - 1;
        }

        // Recalculate the mid-point
        mid = start + (end - start) / 2;
    }
    
    // Key not found
    return -1;
}

// Function to find the peak element in a mountain array
// A peak element is one which is greater than its neighbors
int findPeak(int arr[], int n) {
    int start = 0, end = n - 1;
    
    // Calculate mid-point of the current search window
    int mid = start + (end - start) / 2;

    // Loop continues until start and end converge
    while (start < end) {

        // If the current element is smaller than the next, move to the right
        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1; 
        } 
        // Otherwise, move to the left
        else {
            end = mid;
        }

        // Recalculate the mid-point
        mid = start + (end - start) / 2;
    }

    // At the end of the loop, start == end, and that is the peak index
    return start;
}

int main() { 

    // Define sorted arrays for testing binary search
    int even[6] = {2, 4, 6, 8, 12, 18};   // even-sized array
    int odd[5] = {3, 8, 11, 14, 16};      // odd-sized array

    // Perform binary search on the even array for key 6
    int evenIndex = binarySearch(even, 6, 6);
    if (evenIndex != -1) {
        cout << "Index of 6 in the even array is: " << evenIndex << endl;
    } else {
        cout << "6 not found in the even array." << endl;
    }

    // Perform binary search on the odd array for key 14
    int oddIndex = binarySearch(odd, 5, 14);
    if (oddIndex != -1) {
        cout << "Index of 14 in the odd array is: " << oddIndex << endl;
    } else {
        cout << "14 not found in the odd array." << endl;
    }

    // Define a mountain array for testing peak element finder
    int mountain[7] = {1, 3, 8, 12, 4, 2, 0}; // Mountain array

    // Find the peak element in the mountain array
    int peakIndex = findPeak(mountain, 7);
    cout << "The peak element is at index: " << peakIndex << " with value: " << mountain[peakIndex] << endl;

    return 0;
}

// Determine the third largest element of an array.
// Input: arr = [1, 2, 8, 16, 16, 16]
// Output: 2

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the third largest unique element
int thirdLargestElement(vector<int>& arr) {
    // Remove duplicates by sorting and using unique function
    sort(arr.begin(), arr.end());  // Sort array in ascending order
    arr.erase(unique(arr.begin(), arr.end()), arr.end());  // Remove duplicates

    // Check if there are at least 3 unique elements
    if (arr.size() >= 3) {
        return arr[arr.size() - 3];  // Return the third largest element
    } else {
        return -1;  // Indicate an error if there aren't enough unique elements
    }
}

int main() {
    // Example array
    vector<int> arr = {1, 2, 8, 16, 16, 16};
    
    // Find and print the third largest element
    int thirdLargest = thirdLargestElement(arr);
    
    if (thirdLargest != -1) {
        cout << "Third largest element: " << thirdLargest << endl;
    } else {
        cout << "Not enough unique elements" << endl;
    }
    
    return 0;
}
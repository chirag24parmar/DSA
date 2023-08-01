//WAP for selection sort

// Space complexity == O(1).
// Time  complexity == O(n^2).
// Best case & worst case == O(n^2).


#include <iostream>
using namespace std;

// Selection sort function
void selectionSort(int arr[], int n)
{   
    for(int i = 0;i<n-1;i++){

        int midIndex =i;

        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[midIndex])
                midIndex = j;
        }
        // Swap the found minimum element with the element at index i
        swap(arr[midIndex], arr[i]);
    }
}

int main()
{
    int arr[5] = {5,2,3,4,1};
    //example = sizeof(arr) / sizeof(arr[0]) will be 20 bytes / 4 bytes = 5. It means there are 5 element is present in array.
    int n = sizeof(arr) / sizeof(arr[0]);
    
    selectionSort(arr,5);

    cout << "Sorted array: ";
    // this loop is for printing the final sorted array.
    for (int i = 0; i <n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

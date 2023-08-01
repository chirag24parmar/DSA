//WAP for Bubble Sort

#include<iostream>
using namespace std;

//function for bubble sort
void bubbleSort(int arr[], int n)
{   
    for(int i =1;i<n;i++){

        bool swapped = false;

        for(int j = 0;j<n-i;j++){
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        if(swapped == false){
            break; 
        }
    }
}

int main()
{
    int arr[5] = {5,2,3,4,1};
    //example = sizeof(arr) / sizeof(arr[0]) will be 20 bytes / 4 bytes = 5. It means there are 5 element is present in array.
    int n = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr,5);

    cout << "Sorted array: ";
    // this loop is for printing the final sorted array.
    for (int i = 0; i <n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


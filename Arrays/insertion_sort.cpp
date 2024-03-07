#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j=i-1;
        
        while(j>=0 && arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}

int main()
{
    int arr[5] = {5,2,3,4,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    insertionSort(arr,n);

    cout << "Sorted array: ";
    // this loop is for printing the final sorted array.
    for (int i = 0; i <n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
// Remove Duplicates in-place from Sorted Array
#include<iostream>
using namespace std;

int remove_duplicate(int arr[],int n){

    int i = 0;

    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        } 
    }
    return i+1;
}


int main(){
    int arr[] = {0,1,2,2,2,3,3,4,4,4,4,5};
    int n = sizeof(arr)/sizeof(int);
    int k = remove_duplicate(arr,n);

    for (int i = 0; i < k; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;   
}
// Find the Smallest and Largest Value from the array
#include<iostream>
using namespace std;

int find_largest_value(int arr[],int n){
 int largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int find_smallest_value(int arr[],int n){
    int smallest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main(){
    int arr[] = {2,4,3,6,8,1,0};
    int arr_size = sizeof(arr)/sizeof(int);

    cout<<"Largest value in array is:- "<<find_largest_value(arr,arr_size)<<endl;
    cout<<"Smallest value in array is:- "<<find_smallest_value(arr,arr_size)<<endl;
     
    return 0;
}
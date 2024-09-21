// Find the Smallest and Largest Value from the array
#include<iostream>
#include<limits.h>
using namespace std;

int find_second_largest_value(int arr[],int n){
    if(n<2)
        return -1;

 int largest = INT_MIN;
 int second_largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i]<largest && arr[i]>second_largest)
        {
            second_largest = arr[i];
        }
        
    }
    return second_largest;
}

int find_second_smallest_value(int arr[],int n){
    if(n<2)
        return -1;

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]<smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i]>smallest && arr[i]<second_smallest)
        {
            second_smallest = arr[i];
        }
        
    }
    return second_smallest;
}

int main(){
    int arr[] = {2,4,3,6,7,8,8,9,1,0};
    int arr_size = sizeof(arr)/sizeof(int);

    cout<<" Second largest value in array is:- "<<find_second_largest_value(arr,arr_size)<<endl;
    cout<<"Second smallest value in array is:- "<<find_second_smallest_value(arr,arr_size)<<endl;
     
    return 0;
}
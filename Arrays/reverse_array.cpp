//WAP for reverse the array

#include<iostream>
using namespace std;

// function for reversing the array with the help of two variable
void reverse(int arr[] ,int n){
    int start = 0;
    int end = n-1;

    while (start<=end)
    {
        //swapping the value of start and end value
       swap(arr[start],arr[end]);

       // shifting 'start' from right to left
       start++;

       // shifting 'end' from left to right
       end--;
       
    }
}

// function for printing the reverse array
void printArray(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    //array declaring 
    int arr[5] = {1,2,3,4,5};

    //calling reverse function
    reverse(arr,5);

    //calling printArray function 
    printArray(arr,5);

    return 0;
}

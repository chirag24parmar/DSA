//WAP to sum the element of array

#include<iostream>
using namespace std;

// creating function for adding the array element
int sumOfArray(int arr[], int n){
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = arr[i] + sum;
    }
    return sum; 
}

int main(){

    int n;
    cin>>n;

    // array declaring 
    int arr[5];

    // loop for taking array 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
    
    // printing the Sum of array
    cout<<sumOfArray(arr,n)<<endl;
    return 0;
}
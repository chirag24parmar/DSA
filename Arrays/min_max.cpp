// WAP to find the minimum and maximum value in array

#include<iostream>
#include<limits.h>
using namespace std;

//function of finding  MAX value 
int getMax(int arr[], int n){
    int max = INT_MIN;

    //loop for finding max value 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];   
        }
    }    
        
        //returing max value
        return max;
}

//function of finding  MIN value
int getMin(int arr[], int n){
    int min = INT_MAX;

    //loop for finding min value 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];   
        }
    }    
        
        //returing min value
        return min;
}

int main(){
    int n;
    cin>>n;  

    //declaring array of 100
    int arr[100];  

    // taking input in array 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //printing the MAX value
    cout<<"Maximum value is "<<getMax(arr,n)<<endl;

    //printing the MIN value
    cout<<"Minimum value is "<<getMin(arr,n)<<endl;

return 0;
}
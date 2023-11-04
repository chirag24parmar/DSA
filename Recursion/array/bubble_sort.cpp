#include<iostream>
using namespace std;

//function for sorting(bubble sort) array using recursion
void sort_array(int *arr,int n){
    
    //base case
    if(n == 1 || n == 0){
        return ;
    }

    //processing - Put the largest number in the array at the end.
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        } 
    }

    //recursive call
    sort_array(arr,n-1);
    
}

int main()
{   

    int arr[10] = {5,7,3,4,6,9,8,2,1,0};
    int n = 10;

    sort_array(arr,n);

    cout <<"Sorted array - ";

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}

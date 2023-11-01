#include<iostream>
using namespace std;

//creating function for checking the array is sorted or not using recursion
bool isSorted(int *arr, int size){

    //base case
    if(size == 0 || size == 1) 
        return true;

    //Recursive relation or call
    if (arr[0]>arr[1])
        return false;
    else 
        return isSorted(arr+1,size-1);
}

int main()
{
    int arr[5] = {1,2,8,4,5};
    int size = 5;

    bool ans = isSorted(arr,size);

    //print the final result, sorted or not.
    if(ans){
        cout<<"Array is sorted"<<endl;
    }else{
        cout<<"Array is not sorted"<<endl;
    }

    return 0;
}
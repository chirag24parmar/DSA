#include<iostream>
using namespace std;

void reverse(int arr[],int start,int end){
    while (start<=end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArr(int arr[],int k,int n){
    k = k%n;
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(int);
    int k = 4;

    rotateArr(arr,k,n);
    
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
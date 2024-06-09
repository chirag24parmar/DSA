#include<iostream>
using namespace std;

void rotate(int arr[], int k, int n){
    int p = 1;
    while (p<=k)
    {
        int last = arr[0];
        for(int i = 0;i<n-1;i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = last;
        p++;
    }    
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(int);
    int k = 2;

    rotate(arr,k,n);
    
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
}
// Print half of the array in ascending order and half of array in descending order
#include<iostream>
#include<algorithm>
// #include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,3,5,1,4,6};
    int n = sizeof(arr)/sizeof(int);

    sort(arr,arr+n);

    for (int i = 0; i < n/2; i++)
    {
        cout<<arr[i];
    }

    for (int i = n-1; i >= n/2; i--)
    {
        cout<<arr[i];
    }
    return 0;   
}
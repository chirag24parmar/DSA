#include<iostream>
#include<algorithm>
using namespace std;

int second_largest(int arr[],int n){
    if(n<2)
        return -1;
    
    sort(arr,arr+n);

    int largest = arr[n-1];

    for (int i = n-2; i >= 0; i--)
    {
        if (arr[i]!=largest)
        {
            return arr[i];
            break;    
        }   
    } 
    
}

int second_smallest(int arr[],int n){
    if(n<2)
        return -1;
        
    sort(arr,arr+n);

    int smallest = arr[0];

    for (int i = 1; i <= n; i++)
    {
        if (arr[i]!=smallest)
        {
            return arr[i];
            break;    
        }   
    } 
}

int main(){
    int arr[] = {2};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Second largest value in array:- "<<second_largest(arr,n)<<endl;
    cout<<"Second smallest value in array:- "<<second_smallest(arr,n)<<endl;


    return 0;
}
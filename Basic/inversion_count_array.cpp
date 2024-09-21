#include<iostream>
using namespace std;

int inversionArray(int arr[],int n){
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j]){
                count++;
            }
        } 
    }
    return count;
    
}

int main()
{
    int arr[] = {1,20,6,4,5};
    int n = 5;
    cout<<inversionArray(arr,n);

    return 0;
}

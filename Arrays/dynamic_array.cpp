// WAP to understand how to allocate heap memory.
#include<iostream>
using namespace std;

//function for sum 
int getSum(int *arr, int n){

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;   
}

int main()
{
    int n;
    cin>>n;
// using heap memory
    int *arr = new int[n]; // declaring heap memory using pointer.

// taking input value 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]; // arr[i] is equal to *(arr + i) so, you can use anyone of them.   
    }

    int ans = getSum(arr,n);
    cout<<"Answer - "<<ans<<endl;

    return 0;
}

#include<iostream>
using namespace std;

//function for adding the array
int arraySum(int *arr, int size){

    //base case
    if(size == 0)
        return 0;
    if(size == 1)
        return arr[0];
    
    //recursive relation
    int remaining = arraySum(arr+1,size-1);
    int sum = arr[0] + remaining;
    return sum;
}

int main()
{
    int arr[5] = {2,2,2,2,1};
    int size = 5;

    int ans = arraySum(arr,size);
    cout<<"Sum is - "<<ans<<endl;
    return 0;
}

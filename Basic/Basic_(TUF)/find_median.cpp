// Find Median of the given Array
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {2,3,4,5,1,6,7,8};
    int n = sizeof(arr)/sizeof(int);

    sort(arr,arr+n);

    if (n%2==0)
    {
        int ind1 = (n/2)-1;
        int ind2 = (n/2);
        cout<<(double)(arr[ind1] + arr[ind2])/2;
    }
    else
    {
    cout<<(double)arr[n/2];
    }
    
    return 0;
}
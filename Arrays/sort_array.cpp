#include<iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[] = {3,1,5,2,4};
    int n= sizeof(arr)/sizeof(int);

    sort(begin(arr),end(arr));

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}
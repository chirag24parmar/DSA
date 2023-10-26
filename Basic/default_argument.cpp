#include<iostream>
using namespace std;

// we use default argument when we want to use any argument as default.
// here in my case default argument is "start" so, I have provided default as 0. 
//we always start default argument from the right most.
void printArr(int arr[],int n, int start = 0){

    for (int i = start; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }   
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    //here you can see that, I have not given "start" parameter.
    printArr(arr,size);

    cout<<endl;

    //here, I have given parameter.
    printArr(arr,size,3);

// in both case it work perfectly.    
    
    return 0;
}

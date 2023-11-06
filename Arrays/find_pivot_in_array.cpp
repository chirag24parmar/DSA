//WAP to find Pivot number of index in array (pivot = smallest number in rounded sorted array)

#include<iostream>
using namespace std;


int pivot(int arr[], int n){
    //start & end variable declaration which is pointing to the start and end of array.
    int s = 0;
    int e = n-1;

    //for finding mid value of array
    int mid = s + (e-s)/2;

    while (s<e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid +1;
        }else{
            e=mid;
        }

        mid = s + (e-s)/2;
    }
    return s;
}

int main()
{
    int arr[8]= {6,7,8,1,2,3,4,5};

    cout<<"Index of Pivot number is:- "<<pivot(arr,8);
    return 0;
}

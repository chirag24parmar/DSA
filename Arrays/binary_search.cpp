//WAP for binary search

#include<iostream>
using namespace std;

//function for binary search
int binarySearch(int arr[], int n, int key){
    //start & end variable declaration which is pointing to the start and end of array.
    int start = 0;
    int end = n-1;

    //for finding mid value of array
    int mid = start + (end - start)/2;

    //condition for start is greater or equal to end
    while (start<=end)
    {

        //if mid is equal to key
        if (arr[mid]==key)
        {
            return mid;
        }

        //if mid is smaller then key
        if (arr[mid]<key)
        {
            start = mid + 1;
        }

        //if mid is greater then key
        if(arr[mid]>key){
            end = mid - 1;
        }

        // now after updation of start and end value so, definitely the mid value is also update.
        mid = start + (end - start)/2; 

    }
    //if key is not present in array then it will return -1.
    return -1;
}

int main()
{
    int arr[6] = {1,2,3,4,5,6,};

    //calling function
    int index = binarySearch(arr , 6 , 6);

    cout<<"Index of key is :- "<<index<<endl;

    return 0;
}

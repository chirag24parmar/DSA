#include<iostream>
using namespace std;

//function for searching the key(binary search)
bool binarySearch(int arr[],int key,int s,int e){
//base case

    //element not found
    if(s>e)
        return 0;

    //for finding the mid value
    int mid = s + (e-s)/2;

    //element found
    if (arr[mid]==key)
        return 1;
    
//recursive call or relation
    if(arr[mid] < key)
    {
        return binarySearch(arr,key,mid+1,e);
    }
    else
    {
        return binarySearch(arr,key,s,mid-1);
    }
}


int main()
{
    int arr [5] = {2,4,6,8,9};
    int size = 5;
    int key = 9;

    //calling function
    bool ans = binarySearch(arr,key,0,size-1);

    //printing the result that key is found or not.
    if (ans)
    {
        cout<<"Found the key"<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    } 
    return 0;
}

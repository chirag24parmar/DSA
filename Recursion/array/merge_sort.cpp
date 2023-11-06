#include<iostream>
using namespace std;


void merge(int *arr,int s,int e){

    int mid = s+(e-s)/2;

    int len1 = mid-s+1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //coping value to 2 differwent array
    int mianArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mianArrayIndex++];
    }

    mianArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mianArrayIndex++];
    }
    
    //merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    mianArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mianArrayIndex++] = first[index1++];
        }else{
            arr[mianArrayIndex++] = second[index2++];
        }   
    }

    while (index1 < len1)
    {
       arr[mianArrayIndex++] = first[index1++];
    }
    
    while (index2 < len2)
    {
       arr[mianArrayIndex++] = second[index2++];
    }

    delete []first;    
    delete []second;
}

void mergeSort(int *arr, int s, int e){
    
    //base case
    if(s>=e){
        return;
    }

    //finding mid
    int mid = s+(e-s)/2;

    //sorting for left part
    mergeSort(arr,s,mid);

    //sorting for right part
    mergeSort(arr,mid+1,e);

    //merge
    merge(arr,s,e);
}


int main()
{
    int arr[5]= {2,4,1,3,5};
    int n = 5;

    mergeSort(arr,0,n-1);

    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}

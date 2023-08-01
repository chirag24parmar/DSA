// WAP for merging two sorted array.

#include<iostream>
using namespace std;

// function for merging two array
void merge(int arr1[], int n, int arr2[], int m, int arr3[]){

    int i=0,j=0,k = 0;

    while (i<n && j<m)  
    {
        if (arr1[i]<arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }    
    }

    //coping the remaning of i
    while (i<n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    //coping the remaning of j
    while (j<m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

//printing final arr3[].
void print(int ans[], int n){

    for (int  i = 0; i <n ; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr1[4] = {2,4,6,8};
    int arr2[6] = {1,3,5,7,9,10};
    int arr3[10] = {0};

    merge(arr1, 4, arr2, 6, arr3);

    print(arr3, 8);

    return 0;
}
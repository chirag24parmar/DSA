//WAP to search the element in 2D array

#include<iostream>
using namespace std;

//function for searching the element
bool isPresent(int arr[][3], int target, int i, int j){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr [i][j] == target)
            {
                return 1;
            }   
        }
    }
    return 0;
}

int main()
{   
    //declaring 2D array
    int arr[2][3];

    //taking input
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }   
    }

    int target;
    cout<<"Enter the element to search -: ";
    cin>>target;

    //checking the element is present or not
    if (isPresent(arr, target,2 ,3))
    {
        cout<<"Found element ";
    }else{
        cout<<"Not Found ";
    }
    
    return 0;
}

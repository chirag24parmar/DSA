// WAP for adding row wise 2D array 

#include<iostream>
using namespace std;

//function for sum
void printSum(int arr[][3], int i, int j){

    cout<<"Printing the sum of array -: "<<endl;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[3][3];

    // taking input of 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }

    // printing output of 2D array 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;        
    }

    // printing the sum of row wise array
    printSum(arr, 2, 3);

    return 0;
}

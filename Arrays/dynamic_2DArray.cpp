#include<iostream>
using namespace std;

int main()
{
    int row;
    cin>>row;

    int col;
    cin>>col;

//creating a 2D array in dynamic memory
    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

// Taking input for 2D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }

// printing output of 2D array 
    cout<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }

//deleting the allocated memory 
// first we remove the row of array
    for (int i = 0; i < row; i++)
    {
        delete [] arr[i];
    }
// then delete the whole array 
    delete []arr;

// if we directely write the above line,it does,nt mean that memory is properly free. 

    return 0;
}

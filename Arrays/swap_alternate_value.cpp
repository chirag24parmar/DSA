// WAP to alternate the value of array

#include<iostream>
using namespace std;

//function of printing array (result array)
void printArray(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//function of alternating the value of array
void swapAlernate(int arr[], int size){

    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size)
        {
            swap(arr[i],arr[i+1]);
            
            //how swap function work start
                // int temp = arr[i];
                // arr[i] = arr[i+1];
                // arr[i+1] = temp;
            //swap function end

        }
    }
}

int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};

    //function call
    swapAlernate(arr , 8);
    printArray(arr , 8);

    return 0;
}

//WAP for linear search (searching a perticular number in array)

#include<iostream>
using namespace std;

//fuction for finding the element in the array
bool search(int arr[], int size, int key){
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            // if element is present then return 1
            return 1;
        }
    }
    //else return 0
    return 0;
}

int main(int argc, char const *argv[])
{
    //array declaration
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    cout<<"Enter the element to search for - ";

    int key;
    cin>>key;

    //function call
    bool found = search(arr,10,key);

    // if found is 1 or true, then print this
    if (found)
    {
        cout<<"Key is Present"<<endl;
    }
    // else print this
    else
    {
        cout<<"Key is not Present"<<endl;
    }
    
    return 0;
}

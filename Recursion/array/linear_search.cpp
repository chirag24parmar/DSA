#include<iostream>
using namespace std;

//function for finding the key(linear search)
bool print(int *arr,int size,int& key){

    //base case
    if(size == 0) 
        return 0;

    //processing
    if(arr[0] == key)
        return 1;
    else
        return print(arr+1,size-1,key); //recursive call or relation
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int key = 3;

   bool ans =  print(arr,size,key);

    //printing the final result
    if (ans)
    {
        cout<<"found the key"<<endl;
    }else{
        cout<<"Not found key"<<endl;
    }
    return 0;
}

// Average of all elements in an array
#include<iostream>
using namespace std;

float average(float arr[],int n){
    float sum = 0;
    float avg;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    avg = sum/n;
    return avg;    
}

int main(){

    float arr[] = {1,2,1,1,5,1};
    int arr_size = sizeof(arr)/sizeof(int);

    cout<<"Average is:- "<<average(arr,arr_size);

    return 0;
}

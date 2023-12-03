#include<iostream>
using namespace std;

int add_odd(int arr[],int n){
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==1){
            sum = sum + arr[i];
        }else{
            continue;
        }   
    }
return sum;


}

int main()
{
    int arr[] = {2,4,9,7,11,13,25,31,6,8,10,24};
    int n = 12;
    cout<<add_odd(arr,n);
    return 0;
}

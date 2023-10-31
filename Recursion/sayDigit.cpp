#include<iostream>
using namespace std;

//recursive function for converting digit to words 
void sayDigit(int n,string arr[]){

    //Base case
    if(n==0)
        return ;

    //processing part
        //example input is - 432

    int digit = n % 10;         //this is used to find the first number from the sets of numbers - 2
    n = n/10;                   //this method is use to update the n value - 43.2

        //this will repeat and line by line we get the all the numbers.

    //recursive call or relation
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";    
}

int main()
{
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    int n;
    cout<<"Enter the number - ";
    cin>>n;
    
    sayDigit(n,arr);
    return 0;
}

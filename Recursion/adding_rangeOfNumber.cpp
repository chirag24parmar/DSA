//Adding the range of number using recursion
#include<iostream>
using namespace std;

//recursion function
int sum(int value){
    //Base case
    if (value == 0)
        return 0;

    // Recursive relation    
    return value + sum(value - 1);    
}
int main()
{
    int value;
    cout<<"Enter the number - ";
    cin>>value;

    int result = sum(value);
    cout<<"Addition range of "<<value<<" is - "<<result<<endl;
    return 0;
}

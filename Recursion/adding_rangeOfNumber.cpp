//Adding the range of number using recursion
#include<iostream>
using namespace std;

//recursion function
int sum(int k){
    //Base case
    if (k == 0)
        return 0;

    // Recursive relation    
    return k + sum(k - 1);    
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

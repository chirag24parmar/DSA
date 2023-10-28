//Adding the range of number using recursion
#include<iostream>
using namespace std;

//recursion function
int sum(int k){
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    int value;
    cin>>value;

    int result = sum(value);
    cout<<result<<endl;
    return 0;
}

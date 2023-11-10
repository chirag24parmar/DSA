#include<iostream>
using namespace std;

//function for printing the increasing number
void increasing_number(int n){
    int num = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;   
    }
}

int main()
{
    int n;
    cout<<"Enter the number - ";
    cin>>n;

    increasing_number(n);
    return 0;
}


/*
Input Format: N = 3
Result: 
1
2 3
4 5 6

*/
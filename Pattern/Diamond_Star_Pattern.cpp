#include<iostream>
using namespace std;

void diamond_pattern(int n){

    //this loop print upper part
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<"  ";
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<"* ";
        }
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;   
    }

    //this loop print bottom part
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"  ";
        }
        for (int j = 0; j < 2*n-(2*i+1); j++)
        {
            cout<<"* ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<"  ";
        }
        cout<<endl;
    } 
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number - ";
    cin>>n;
     
    diamond_pattern(n);
    return 0;
}

/*
Input Format: N = 3
Result: 
  *  
 ***
***** 
*****  
 ***
  *  
  
*/
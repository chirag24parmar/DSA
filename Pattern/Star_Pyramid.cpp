#include<iostream>
using namespace std;

//function for printing the star Pyramid
void starP(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<"  ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            cout<<"* ";
        }
        for (int p = 0; p < n-i-1; p++)
        {
            cout<<"  ";
        }
        cout<<endl;
    } 
}

int main()
{
    int n;
    cout<<"Enter the value - ";
    cin>>n;

    starP(n);
    return 0;
}

/*

Input Format: N = 3
Result: 
  *  
 *** 
***** 

*/
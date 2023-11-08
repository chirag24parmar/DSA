#include<iostream>
using namespace std;

//function for printing half diamond pattern
void half_diamond(int n){

    //this loop for no. of rows
    for (int i = 1; i <= 2*n-1; i++)
    {
        int  star = i;

        if(i>n)
            star = 2*n-i;
        
        //this loop is for printing star in rows
        for (int j = 0; j < star; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the enter - ";
    cin>>n;

    half_diamond(n);
    return 0;
}

/*
Input Format: N = 3
Result: 
  *  
  **
  ***  
  **
  *  

*/
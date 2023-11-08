#include<iostream>
using namespace std;

//function for printing binary number triangle
void binary_number_printing(int n){
    

// First row starts by printing a single 1.
int start = 1;

    //this loop is for no. of rows
    for (int i = 0; i < n; i++)
    {
        // if the row index is even then 1 is printed first
        // in that row.
        if(i%2==0){
            start = 1;

        // if odd, then the first 0 will be printed in that row.
        }else{
            start = 0;
        }

        //this loop is for printing binary number
        for (int j = 0; j <= i; j++)
        {
            cout<<start;
            start = 1 - start;    
        }
        cout<<endl;      
    }  
}

int main()
{
    int n;
    cout<<"Enter the number - ";
    cin>>n;

    binary_number_printing(n);
    return 0;
}

/*
Input Format: N = 3
Result: 
1
01
101

*/
#include<iostream>
using namespace std;

//function for printing inverted numbered pyramid
void inverted_numbered_pyramid(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j<=n-i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;   
    }
}

int main()
{
    int n;
    cout<<"Enter the number - ";
    cin>>n;

    inverted_numbered_pyramid(n);
    return 0;
}


/*
Input Format: N = 3
Result: 
1 2 3
1 2
1
*/
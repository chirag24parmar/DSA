#include<iostream>
using namespace std;

//function for printing invert pyramid
void inverted_pyramid(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;   
    }
}

int main()
{
    int n;
    cout<<"Enter the number - ";
    cin>>n;

    inverted_pyramid(n);
    return 0;
}

/*

Input Format: N = 4
Result: 
* * * *
* * *
* *
*

*/
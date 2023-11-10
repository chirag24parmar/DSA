#include<iostream>
using namespace std;

//function for pritning crown number
void crown_number(int n){

    //loops for number of rows
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            //print half side
            cout<<j;
        }
        for (int k = 0; k < n-i; k++)
        {
            //between space
            cout<<"  ";
        }
        for (int o = i; o >= 1; o--)
        {
            //print another half side
            cout<<o;
        }
        cout<<endl;   
    }
}

int main()
{
    int n;
    cout<<"Enter the number - ";
    cin>>n;

    crown_number(n);

    return 0;
}

/*
Input Format: N = 3
Result: 
1    1
12  21
123321

*/
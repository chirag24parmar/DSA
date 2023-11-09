#include<iostream>
using namespace std;

//function for printing the pyramid of number.
void  number_pyramid(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
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

    number_pyramid(n);
    return 0;
}

/*

Input -: 4
Output-:
1
1 2
1 2 3
1 2 3 4

*/

#include<iostream>
using namespace std;

//function for printing the pyramid of number.
void number_pyramid_II(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;   
    }    
}
int main()
{
    int n;
    cout<<"Enter the number - ";
    cin>>n;

    number_pyramid_II(n);

    return 0;
}

/*
Input -: 4
Output-:
1
2 2
3 3 3
4 4 4 4
*/
#include<iostream>
using namespace std;

//function for printing rectangle pattern
void rectangle_pattern(int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j<n; j++)
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

    rectangle_pattern(n);

    return 0;
}

/*

Input -: 4
Output -: 
* * * *
* * * * 
* * * *
* * * * 

*/

#include<iostream>
using namespace std;

//function for printing right angled pattern
void rightAngled_pattern(int n){
    for(int i=1; i<=n; i++){
        for (int j = 1; j<=i; j++)
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

    rightAngled_pattern(n);

    return 0;
}

/*
Input -: 4
Output -:
* 
* * 
* * *
* * * * 

*/

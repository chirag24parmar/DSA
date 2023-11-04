#include<iostream>
using namespace std;

//function for printing inverted star pyramid
void inverted_star(int n){
    for (int i = 0; i < n; i++)
    {
        //printing space
        for (int j = 0; j < i; j++)
        {
            cout<<"  ";
        }
        //printing star pyramid
        for (int j = 0; j < 2*n-(2*i+1); j++)
        {
            cout<<"* ";
        }
        //printing space
        for (int j = 0; j < i; j++)
        {
            cout<<"  ";
        }
        cout<<endl;   
    }  
}
int main()
{
    int n;
    cout<<"Enter the number - ";
    cin>>n;

    inverted_star(n);
    return 0;
}

/*
Input Format: N = 3
Result: 
*****  
 ***
  *   

*/
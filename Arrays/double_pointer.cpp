#include<iostream>
using namespace std;

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

// printing the value of i
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    cout<<endl;

//printing the address of i
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    cout<<endl;

//printing the address of p
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<endl;

    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    char ch [6] = "abcde";

    cout<<ch<<endl; //it will print the values of ch

    char *c = &ch[0];
    cout<<c<<endl; //it also print the whole values 
    cout<<*c<<endl; // it will print value of 0th index
    cout<<&c<<endl; // it will print adress of 0th index

    return 0;
}

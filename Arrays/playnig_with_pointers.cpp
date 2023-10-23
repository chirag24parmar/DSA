#include<iostream>
using namespace std;

int main()
{
    int arr[10]= {3,6,7,4};

    cout<<arr<<endl; // printing the 0 index of address
    cout<<&arr<<endl; // printing the 0 index of address

    cout<<&arr[2]<<endl; // printing the address the perticular index 
    
    cout<<*arr<<endl; //printing the  0th index of value
    cout<<*arr + 1<<endl; // printing the addition of perticular index of array
    cout<<*(arr + 2)<<endl; //printing the perticular index value with the help of pointers

    cout<<3[arr]<<endl; //it will not show error it will print the 3th index value

    int temp[10];
    cout<<sizeof(temp)<<endl; // array taken 40 byte

    int *p = &temp[0];
    cout<<sizeof(p)<<endl; // pointers take less memory as comparison to array, it take 8 byte /4 byte
    cout<<sizeof(*p)<<endl; // it will take 4 byte
    cout<<sizeof(&p)<<endl; // it will take 8 byte/4 byte

    cout<<&p<<endl; // *p will print its own address 
    cout<<&temp<<endl; // temp will print its own address


    return 0;
}

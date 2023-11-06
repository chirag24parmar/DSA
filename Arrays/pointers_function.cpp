#include<iostream>
using namespace std;

void printPointer (int *ptr){
    cout<<"address - "<<ptr<<endl; //print the address
    cout<<"Print - "<<*ptr<<endl; // print the value
}

void update (int *ptr){

    ptr = ptr + 1; //updating the address
    cout<<"address - "<<ptr<<endl;//print the updated address
    *ptr = *ptr + 1; // updating the value
    cout<<"print - "<<*ptr<<endl; //print the updated value
}

int main()
{
    int value = 5;
    int *ptr = &value;

    printPointer(ptr);
    update(ptr);
    return 0;
}

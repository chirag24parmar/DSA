//simple understanding of pointers
#include<iostream>
using namespace std;

int main()
{
    int num = 10;
    int *ptr = &num;

    cout<<num<<endl;        // print 5
    cout<<*ptr<<endl;       // print 5
    cout<<&num<<endl;       // print the address of num
    cout<<&*ptr<<endl;      // print the adress of num
    cout<<ptr<<endl;        // print the adress of num

    cout<<"size is - "<<sizeof(num)<<" byte"<<endl; // check the size of pointer or variable

    return 0;
}

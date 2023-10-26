#include<iostream>
using namespace std;

//this way we can write macros and reduce space and improve code quality
#define PI 3.14 

int main()
{
    int r = 5;

    // here we have used the PI also
    double area = PI * r * r;
    cout<<"Area is "<<area<<endl;

    return 0;
}

#include<iostream>
using namespace std;
//with the help of operator overloading we can change the work of any operator 

class A{

    public:
    int a;

    //here you can see that, we have change the method od addition into subtraction
    void operator+ (A &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout<< "Output - "<<value2 - value1 <<endl;
    }

};

int main()
{
    A obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    
    return 0;
}

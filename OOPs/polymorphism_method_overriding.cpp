#include<iostream>
using namespace std;
//how we can override the method (method overriding)

class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

//here you can see that parent and sub class have same function
class Dog: public Animal{
    //now if,I want to override means, modified the function working
    //first follow the rules :-
    //1. function name should be same.
    //2. argument should be same.
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main()
{
    Dog obj;
    //here you can see that output will show "Barking" not "speaking".
    obj.speak();

    //like this way you can override the function
    
    return 0;
}

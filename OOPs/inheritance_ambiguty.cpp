#include<iostream>
using namespace std;

class A {
    public:
    void fun(){
        cout<<"Function 1"<<endl;
    }
};

class B {
    public:
    void fun(){
        cout<<"Function 2"<<endl;
    }
};

class C: public A, public B{
};

int main()
{
    C obj;
    // Scope resolution operator(::),we use this when 2 different class have same function.
    //here it call class A  
    obj.A::fun();
    
    return 0;
}

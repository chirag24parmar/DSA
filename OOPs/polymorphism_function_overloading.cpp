#include<iostream>
using namespace std;

//how you can handle the problem of function overloading

class A{
    //this way we can solve the problem of function overloading
    //by putting argument or by changing the argument type
    public:
    void sayHello(){
        cout<< "Namaste Duniya" <<endl;
    }
    void sayHello(string name){
        cout<< "Namaste Duniya 1" <<endl;
    }
    void sayHello(int age){
        cout<< "Namaste Duniya 2" <<endl;
    }
};


int main()
{
    A obj;
    obj.sayHello();
    
    return 0;
}

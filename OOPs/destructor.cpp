#include <iostream>
using namespace std;
// if we create our destructor, then system build destructor will autometically delete

class Hero{

    public:

    //constructor
    Hero(){
        cout<<"constructor called"<<endl;
    }

    //destructor(~)
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    //static
    Hero a;
    //for static allocation destructor is automatically called
    //that's why destructor it pritning only one time

    //dynamic
    Hero *b = new Hero();
    delete b;
    //but for dynamic we have to call destructor manually

    return 0;
}
 
#include <iostream>
using namespace std;
// if we create our constructor then system build constructor will autometically delete

class Hero{
    //constructor is created
    //created constructor without parameter(default constructor)
    public:
    int health;

    Hero(){
        cout<<"constructor called"<<endl;
    }
    //this is parameterised constructor
    Hero(int health){
        //this keyword is a pointer which points to the current object(here current object is raj),it will provide health to the current object.
        this -> health = health;
        cout<<"this - "<<this<<endl;
    }

    int gethealth(){
        return health;
    }

    int sethealth(int h){
        health = h;
    }
    
    void print(){
        cout<<"health is - "<<this->health <<endl;
    }
};

int main()
{
//--------------------------------------------------------------------------------------------------------------------  
    //statically 
    Hero raj(10);
    // here you can see that address of this keyword and the address of raj is same,because "this" point to the address of current object i.e raj.
    cout<<"Address of raj - "<<&raj<<endl;

    //dynamically
    Hero *raj1 = new Hero;
//--------------------------------------------------------------------------------------------------------------------------

    //here you can see that it will directly copying the constructor or the value of raj
    Hero suresh(raj);

    //here we are pritning both so, you can see the value is same 
    suresh.print();
    raj.print();

    return 0;
}
 
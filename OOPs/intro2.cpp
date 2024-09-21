#include <iostream>
using namespace std;
// if we want to use private varialbe outside the class then we use getter and setter for that

class Hero{

    private:
    int health = 20;

    public:
    int gethealth(){
        return health;
    }

    int sethealth(int h){
        health = h;
    }
};

int main()
{
    
    //creation of object
    Hero raj;

    // here you can see that we are using that varianle fron hero class (using getter)
    cout<<"Health is "<<raj.gethealth()<<endl;

    //here we are setting the value with the help of setter
    raj.sethealth(10);

    cout<<"Health is "<<raj.gethealth()<<endl;

    return 0;
}
 
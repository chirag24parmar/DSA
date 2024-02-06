#include <iostream>
using namespace std;

class Hero{

    private:
    int level;

    public:
    int gethealth(){
        return level;
    }

    int sethealth(int h){
        level = h;
    }
};

int main()
{
    
    //creation of object (dynamically)
    Hero *raj = new Hero;

    // here you can see how we can print dynamic memory(->)
    cout<<"Health is "<<raj->gethealth()<<endl;

    //you can set your dynamic value like this 
    raj->sethealth(10);

    cout<<"Health is "<<raj->gethealth()<<endl;


    return 0;
}
 
#include <iostream>
using namespace std;
//if the class is empty then it take 1 byte

class Hero{
    //properties
    public:
    int health;
    char level;
};

int main()
{
    
    //creation of object
    Hero raj;

    //we can print any variable from class with DOT(".") operator
    raj.health = 10;
    raj.level = 'A';

    cout<<"Health is "<<raj.health<<" and level is "<<raj.level<<endl;

    return 0;
}
 
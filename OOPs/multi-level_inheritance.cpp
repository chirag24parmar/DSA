#include<iostream>
using namespace std;

class Animal {

    public:
    int age;
    int weight;

    public:
    void speek(){
        cout<<"Speeking"<<endl;
    }
};

//sub-class 1
class Dog: public Animal{

};

// sub-class 2
class GermanShepherd: public Dog{
    
};

int main()
{
    //here you can see GermanShepherd is accessing from parent class and sub-class of animal
    GermanShepherd g;
    g.speek();
    cout<<g.age<<endl;
    
    return 0;
}

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

//single-inheritance
class Dog: public Animal{

};

int main()
{
    //here you can see Dog is accessing from parent class
    Dog d;
    d.speek();
    cout<<d.age<<endl;
    
    return 0;
}

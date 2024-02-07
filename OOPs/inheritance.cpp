#include<iostream>
using namespace std;

class Human {
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void serWeight(int w){
        this->weight = w;
    }
};

//inherit class of Human
class Male: public Human{
    public:
    string colour;

    void sleep(){
        cout<< "Male Sleeping" <<endl;
    }

};

int main()
{
    //here you can see that Male class is accessing every variable of Human class
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.colour<<endl;

    object1.sleep();

    return 0;
}

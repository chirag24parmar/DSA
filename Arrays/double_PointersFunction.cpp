#include<iostream>
using namespace std;
void update(int **p2){
//use only one eqation at a time for better understanding

    // p2 = p2 + 1; // Adress will not change because value is not chaning in real block

    // *p2 = *p2 + 1; // address of p will change

    **p2 = **p2 + 1; // value will change 

}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout<<"Before - "<<i<<endl;
    cout<<"Before - "<<p<<endl;
    cout<<"Before - "<<p2<<endl;
    cout<<endl;
    
    update(p2);

    cout<<"After - "<<i<<endl;
    cout<<"After - "<<p<<endl;
    cout<<"After - "<<p2<<endl;
    cout<<endl;

    return 0;
}

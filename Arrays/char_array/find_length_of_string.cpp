#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char name[20];
    cin>>name;
    cout<<"The Length of "<<name<<" is :- "<<getLength(name);

    // cout<<getLength(name);
    
    return 0;
}

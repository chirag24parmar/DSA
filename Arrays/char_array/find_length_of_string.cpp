//WAP to find the length of string

#include<iostream>
using namespace std;

//function for count the lenght of string
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
    
    return 0;
}

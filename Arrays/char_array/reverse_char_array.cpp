//WAP for reverse the String
//for reversing the string ,it importent to know the length of string so, we first find the length of String.

#include<iostream>
using namespace std;

//function for reverse the string
void reverse(char name[],int n){
    int s =0;
    int e = n-1;

    while (s<e)
    {
        swap(name[s],name[e]);
        s++;
        e--;
    }  
}

//function for count the lenght of string
int getLength(char name[]){
    int count = 0;

    //"\0" == null caharcter
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
    int length = getLength(name);

    cout<<"Length of String is:- "<<length<<endl;;

    reverse(name,length);

    cout<<"Reverse of String is:- "<<name<<endl;
    
    return 0;
}

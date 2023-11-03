#include<iostream>
using namespace std;

//function for reversing the string
void reverse(string& str, int s, int e){
    //base case
    if(s>e)
        return ;
    
    //swapping
    swap(str[s],str[e]);
    s++;
    e--;

    //recursive call
    reverse(str,s,e);
}

int main()
{
    string name = "monday";

    //function call
    reverse(name,0,name.length()-1);

    cout<<"Reversed string - "<<name<<endl;
    return 0;
}

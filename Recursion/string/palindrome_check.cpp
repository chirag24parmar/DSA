#include<iostream>
using namespace std;

//function for checking the string is palindrome or not
bool palindrome_check(string& str,int s, int e){

    //base case
    if(s>e)
        return true;
    
    //process
    if (str[s] != str[e])
    {
        return false;
    }
    else
    {
        //recursive call
        return palindrome_check(str,s+1,e-1);
    }
}
int main()
{
    string name = "aabbaa";

    bool ans = palindrome_check(name,0,name.length()-1);

    if (ans)
    {
        cout<<"It's a Palindrome."<<endl;
    }
    else
    {
        cout<<"It's not a Palindrome."<<endl;
    }
    
    return 0;
}

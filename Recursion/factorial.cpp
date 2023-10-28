//program recursive factorial 
#include<iostream>
using namespace std;


int factorial(int input){
    //Base case
    if(input==0)
        return 1;

    // Recursive relation
    return input * factorial(input - 1);
       
}
int main()
{
    int input;
    
    cout<<"Enter the number - ";
    cin>>input;

    int ans = factorial(input);

    cout<<"factorial of "<<input<<" is - "<<ans<<endl;
    return 0;
}

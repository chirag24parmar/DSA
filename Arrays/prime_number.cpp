//WAP for prime number
#include<iostream>
using namespace std;

//function for finding prime number
int isPrime(int n){

    if (n<=1)
    return false;
    

    for (int i =2 ;i<n; i++)
    {   
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
    
} 

//main function
int main()
{
    int n;
    cin>>n;

    if (isPrime(n)){
        cout<<"its a prime number"<<endl;
    }else
    {
        cout<<"not a prime number"<<endl;
    }
    
    return 0;
}


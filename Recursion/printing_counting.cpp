//printing the number count using recursive
#include<iostream>
using namespace std;

void print(int n){
    // Base case
    if(n == 0)
        return ;

    cout<<n<<endl;

    //recursive relation
    print(n - 1);            
}

int main()
{
    int n;
    cout<<"Enter the number - ";
    cin>>n;

    print(n);
    return 0;
}

#include<iostream>
using namespace std;

// benifit of using inline function is reduce the use of memory. 

// inline function 
inline int getMax(int& a, int& b){
    return (a<b) ? a : b;
}

int main()
{  
    int a = 4;
    int b = 3;

    int ans = 0;

    // new way of writing If / else condition
    ans = getMax(a,b);
    cout<<ans<<endl;

    a += 2;
    b += 6;

    ans = getMax(a,b);
    cout<<ans<<endl;

    return 0;
}

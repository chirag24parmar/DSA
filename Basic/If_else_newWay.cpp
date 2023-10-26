#include<iostream>
using namespace std;

int main()
{  
    int a = 4;
    int b = 3;

    int ans = 0;

    // new way of writing If / else condition
    ans = (a<b) ? a : b;
    cout<<ans<<endl;

    a += 2;
    b += 6;

    ans = (a<b) ? a : b;
    cout<<ans<<endl;

    return 0;
}

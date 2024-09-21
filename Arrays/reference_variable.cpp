#include<iostream>
using namespace std;

// normal function
void update1(int n){
    n++;
}

// function using refernce variable
// reference variable name is "m"
void update2(int& m){
    m++;
}

int main()
{
// --------------------------------------------------------------------------------------------------------------------------------    
    //simple understanding of refernce variable

    int i = 5; // normal decleration

    int &j = i; // way of writing reference variable of i

    cout<<"Printing j - "<<j<<endl; // it will print 5 as output
    i++;
    cout<<"Printing i - "<<i<<endl; // it will print 6 because i++
    j++;
    cout<<"Printing j - "<<j<<endl; //it will print 7 because j++ and j is refernce varianble
    cout<<"Simple understanding is Over"<<endl;
    cout<<endl;
// ---------------------------------------------------------------------------------------------------------------------------------
    //understanding by function or call by refernce variable

    int n = 2;
    int l = 2;

    // normal function calling 
    cout<<"Before - "<<n<<endl; // print 2
    update1(n);
    cout<<"After - "<<n<<endl; // without updation it will print 2

    cout<<"Normal Function"<<endl;
    cout<<endl;

    // using refernce variable
    cout<<"Before - "<<l<<endl; // print 2
    update2(l);
    cout<<"After - "<<l<<endl; // update the value and print 3 

    cout<<"Refernce variable Function"<<endl;
    cout<<endl;
// ----------------------------------------------------------------------------------------------------------------------------------
    return 0;
}

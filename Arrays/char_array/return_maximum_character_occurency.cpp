//WAP for finding the maximum occurency of charater in words

#include<iostream>
using namespace std;

char getMaxOccCharater(string s){

// creating array for storing the count of character
    int arr[26] = {0}; 

    for (int i = 0; i < s.length(); i++)
    {
        int ch = s[i];
        int number = 0;
        //if that charcter is in lowercase
        if (ch >='a' && ch <='z')
        {
            number = ch - 'a'; 

        //if that charcter is in uppercase
        }else{
            number = ch - 'A';
        }
        arr[number]++;
        
    }

    // for finding maximum occurency in character
    int maxi = -1;
    int ans = 0;

    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }    
    }

    //printing maximum character
    char finalAns = 'a' + ans;
    return finalAns;
    
    
}

int main()
{
    // declaring 's' as string
    string s;
    cin>>s;

    cout<<getMaxOccCharater(s);
    return 0;
}

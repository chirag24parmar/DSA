//this are the basic function of string 

#include<iostream>
#include<string>
using namespace std;

//function for valid character
    bool valid(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return 1;
        }
        return 0;
    } 
//function for lower case
    char toLower(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') ){
            return ch;
        }else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
// checking the string is palindrome or not
    bool checkPalindrome(string a){
        int s = 0;
        int e = a.length() - 1;

        while(s<=e){
            if(a[s] != a[e]){
                return 0;
            }else{
                s++;
                e--;
            }
        }
        return 1;
    }
//WAP to find the square root(sqrt) of number with binary search

#include<iostream>
using namespace std;

//function of finding square root but in integer.
long long int sqrtOfIntegerInInt(int n){
        int s = 0;
        int e = n;
        long long int ans = -1;

        long long int mid = s+(e-s)/2;

        while(s<=e){
            long long int square = mid*mid;

            if(square==n){
                return mid;
            }else if(square<n){
                ans = mid;
                s = mid + 1;
            }else{
                e = mid -1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
//function for converting Integer square root in decimal.
double morePresicion(int n,int presicion, int tempSol){

    double factor = 1;
    double ans = tempSol;

    for(int i = 0; i < presicion; i++)
    {
        factor = factor/10;
        for(double j = ans; j*j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans; 
}    

int main()
{
    int n;
    cout<<"Enter Your number :- ";
    cin>>n;

    int tempSol = sqrtOfIntegerInInt(n);

    cout<<"Square root of "<<n<<" is "<<morePresicion(n,3,tempSol);

    return 0;
}

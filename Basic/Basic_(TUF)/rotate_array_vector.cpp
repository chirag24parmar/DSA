#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> vec= {1, 2, 3, 4, 5};
    int key = 2;

    for (int i = 0; i < key; i++)
    {
        vec.push_back(vec[0]);
        vec.erase(vec.begin());
    }

    for(int i = 0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    return 0;
}
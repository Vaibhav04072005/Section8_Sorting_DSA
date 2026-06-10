// ----------> here in this the random access data is stored in the vectorfunction 
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    vector<int> v = {4,51,2,9};
    // when u are using vector function include header file name as vector
    sort(v.begin(),v.end());


    for(int x :v)
    {
        cout<<x<<" ";
    };
    cout<<endl;

    sort(v.begin(),v.end(),greater<int>());
    for(int x:v){
        cout<<x<<" ";
    }

    // now print the vector
    
return 0;
}
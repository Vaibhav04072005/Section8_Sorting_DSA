// greater int --> it is the functionn that use to show decreasing order of arrray by its own 
#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
//  sort();// here we have to create a function name as sort 

int main()
{
    int arr[]={12,20,30,40,88};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    for(int x:arr){
        cout<<x<<" "; };
        cout<<endl;
    sort(arr,arr+n,greater<int>());
    for (int x :arr)
    {
        cout<<x<<" ";
    }
    
return 0;
}
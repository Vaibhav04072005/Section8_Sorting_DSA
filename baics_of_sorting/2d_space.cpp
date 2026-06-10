// in this programm we are printing the comparision according to 2d sapce in the system

#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

struct point
{
int x,y;};
bool mycomp(point p1,point p2){
return (p1.y>p2.y);}
;



int main()
{
point arr[]={{5,8},{7,4},{3,5}};
int n =sizeof arr/sizeof arr[0];
sort(arr,arr+n,mycomp);

for (int i = 0; i < n; i++)
{
    cout<<"the value of "<<arr[i].x<<"and"<<arr[i].y<<"for i ="<<i;
    cout<<endl;
}
cout<<endl;

}
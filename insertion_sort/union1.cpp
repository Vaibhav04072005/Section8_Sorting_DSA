#include<iostream>
#include<algorithm>

using namespace std;

void unionsorted(int a[],int b[],int n,int m){

    int c[m+n];
    // now traversing the a array
    for (int i = 0; i < n; i++)
    {
        c[i]=a[i];
    }

    // now traversing the b element 
    for (int i = 0; i < m; i++)
    {
        c[i+n]=b[i];
    }
    

    // now sorting the array
    sort(c,c+m+n);
    
    for (int i = 0; i < m+n; i++)
    {
        if(i==0||c[i]!=c[i-1]){
            cout<<c[i]<<" ";
        }
    }
    
   
}

int main()
{
    int a[]={2,4,9,10};
    int b[]={8,9,12,15};

    int n= sizeof a/sizeof a[0];
    int m= sizeof b/sizeof b[0];

    unionsorted(a, b, n, m);
return 0;
}
#include<iostream>
using namespace std;

void unionsorted2(int a[],int b[],int n,int m ){
    int i = 0;
    int j=0;

    while (i<n && j<m)
    {
        if (i>0 && a[i]==a[i-1])
        {
            i++;
            continue;
        }
        if (j>0 && b[j]==b[j-1]) 
        {
            j++;
            continue;
        }
        

    if(a[i]<b[j]){
        cout<<a[i]<<" ";i++;}
    
    else if (a[i]>b[j]){
        cout<<b[j]<<" ";j++;
    
    }
    
    else if (a[i]==b[j]){
        cout<<a[i]<<" ";i++;
        j++;
        
    }
        
    }

    while(i<n){
        if (i=0 && a[i]!=a[i-1])
        {
            cout<<a[i]<<" ";
            
        }
        i++;
    }

        while(j<m){
        if (j=0 && b[j]!=b[j-1])
        {
            cout<<b[j]<<" ";
            
        }
        j++;
    }



}

int main()
{
     int a[]={2,4,9,10};
    int b[]={8,9,12,15};

    int n= sizeof a/sizeof a[0];
    int m= sizeof b/sizeof b[0];

    unionsorted2(a,b,n,m);

return 0;
}
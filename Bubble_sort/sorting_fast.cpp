#include<iostream>
using namespace std;

void bublesort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        bool isswapped=false;
        {
            for (int j = 0; j < n-i-1; j++)
            {
                if (arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    isswapped=true;
                }
                
            }
            if (isswapped==false)
            {
                break;
            }
            
            
        }
    }
    
}

int main()
{
    int arr[]={7,9,1,5,2};
    int n= sizeof arr/ sizeof arr[0];

    bublesort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}